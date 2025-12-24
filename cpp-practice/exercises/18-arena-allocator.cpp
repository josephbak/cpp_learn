#include <iostream>
#include <string>
#include <cstddef>
#include <utility>

class Arena {
    char* buffer;
    size_t capacity;
    size_t offset = 0;
    
public:
    explicit Arena(size_t size) {
        capacity = size;
        buffer = new char[size];
    }
    ~Arena() {
        delete[] buffer;
    }
    
    // Cannot copy or move arena
    Arena(const Arena&) = delete;
    Arena& operator=(const Arena&) = delete;
    
    void* allocate(size_t bytes, size_t alignment = alignof(std::max_align_t)) {
        // 1. Compute aligned offset using formula we discussed 
        size_t aligned_offset = (offset + alignment - 1) & ~(alignment - 1);

        // 2. Check if aligned_offset + bytes > capacity
        //    If so: return nullptr (or throw)
        if (aligned_offset + bytes > capacity) {
            return nullptr;
        }

        // 3. Save pointer to return: buffer + aligned_offset
        void* result = buffer + aligned_offset;

        // 4. Update offset = aligned_offset + bytes
        offset = aligned_offset + bytes;

        // 5. Return the pointer
        return result;
    }
    
    template<typename T, typename... Args>
    T* create(Args&&... args) {
        // placement new
        void* memory = allocate(sizeof(T), alignof(T));
        if (!memory) return nullptr;
        return new (memory) T(std::forward<Args>(args)...);
    }
    
    void reset() {
        offset = 0;
    }

    size_t used() const {
        return offset;
    }

    size_t remaining() const {
        return capacity - offset;
    }
};


struct Point {
    int x, y;
    Point(int x, int y) : x(x), y(y) {
        std::cout << "Point constructed: (" << x << ", " << y << ")\n";
    }
};

int main() {
    std::cout << "=== Arena Construction ===\n";
    Arena arena(1024);
    std::cout << "capacity: 1024\n";
    std::cout << "used: " << arena.used() << " (expect 0)\n";
    std::cout << "remaining: " << arena.remaining() << " (expect 1024)\n";

    std::cout << "\n=== Basic Allocation ===\n";
    int* a = (int*)arena.allocate(sizeof(int), alignof(int));
    *a = 42;
    std::cout << "*a = " << *a << " (expect 42)\n";
    std::cout << "used: " << arena.used() << " (expect 4)\n";

    int* b = (int*)arena.allocate(sizeof(int), alignof(int));
    *b = 100;
    std::cout << "*b = " << *b << " (expect 100)\n";
    std::cout << "used: " << arena.used() << " (expect 8)\n";

    std::cout << "\n=== Alignment Test ===\n";
    char* c = (char*)arena.allocate(1, alignof(char));
    *c = 'X';
    std::cout << "after 1-byte alloc, used: " << arena.used() << " (expect 9)\n";
    
    double* d = (double*)arena.allocate(sizeof(double), alignof(double));
    *d = 3.14;
    std::cout << "*d = " << *d << " (expect 3.14)\n";
    std::cout << "used after aligned double: " << arena.used() << " (expect 24, aligned to 8 + 8)\n";

    std::cout << "\n=== create<T>() Test ===\n";
    Point* p1 = arena.create<Point>(10, 20);
    std::cout << "p1: (" << p1->x << ", " << p1->y << ") (expect 10, 20)\n";

    Point* p2 = arena.create<Point>(30, 40);
    std::cout << "p2: (" << p2->x << ", " << p2->y << ") (expect 30, 40)\n";

    std::cout << "used: " << arena.used() << "\n";

    std::cout << "\n=== reset() Test ===\n";
    arena.reset();
    std::cout << "used after reset: " << arena.used() << " (expect 0)\n";
    std::cout << "remaining after reset: " << arena.remaining() << " (expect 1024)\n";

    std::cout << "\n=== Reuse After Reset ===\n";
    int* e = (int*)arena.allocate(sizeof(int));
    *e = 999;
    std::cout << "*e = " << *e << " (expect 999)\n";

    std::cout << "\n=== Allocation Failure ===\n";
    Arena small(16);
    void* ok = small.allocate(8);
    std::cout << "8-byte alloc: " << (ok ? "success" : "failed") << " (expect success)\n";
    void* fail = small.allocate(100);
    std::cout << "100-byte alloc: " << (fail ? "success" : "failed") << " (expect failed)\n";

    std::cout << "\n=== All tests complete ===\n";
    return 0;
}