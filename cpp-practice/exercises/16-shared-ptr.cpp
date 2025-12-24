#include <iostream>
#include <string>
#include <stdexcept>

template<typename T>
class SharedPtr {
public:
    SharedPtr() :ptr(nullptr), ref_count(nullptr){}

    explicit SharedPtr(T* ptr) 
    : ptr(ptr), ref_count(ptr ? new size_t(1) : nullptr) {}

    SharedPtr(const SharedPtr& other) : ptr(other.ptr), ref_count(other.ref_count) {
        // copy constructor
        if (ref_count) (*ref_count)++; // increment shared count
    }       

    SharedPtr(SharedPtr&& other) noexcept : ptr(other.ptr), ref_count(other.ref_count) {
        other.ptr = nullptr;
        other.ref_count = nullptr;
    }

    SharedPtr& operator=(const SharedPtr& other) {
        if (this == &other) return *this;
        
        // release old
        if (ref_count) {
            (*ref_count)--;
            if (*ref_count == 0) {
                delete ptr;
                delete ref_count;
            }
        }
        
        // copy new
        ptr = other.ptr;
        ref_count = other.ref_count;
        if (ref_count) (*ref_count)++;
        
        return *this;
    }

    SharedPtr& operator=(SharedPtr&& other) noexcept {
        if (this == &other) return *this;

        if (ref_count) {
            (*ref_count)--;
            if (*ref_count == 0) {
                delete ptr;
                delete ref_count;
            }
        }

        ptr = other.ptr;
        ref_count = other.ref_count;

        other.ptr = nullptr;
        other.ref_count = nullptr;
        
        return *this;
    }

    ~SharedPtr() {
        if (ref_count) {
            (*ref_count)--;
            if (*ref_count == 0) {
                delete ptr;
                delete ref_count;
            }
        }
    }
    
    T& operator*() const {
        if (!ptr) throw std::runtime_error("dereference null");
        return *ptr;
    }

    T* operator->() const {
        return ptr;
    }

    T* get() const {
        return ptr;
    }

    size_t use_count() const {
        return ref_count ? *ref_count : 0;
    }

    bool unique() const {
        return ref_count && *ref_count == 1;
    }

    void reset(T* ptr = nullptr) {
        if (ref_count) {
            (*ref_count)--;
            if (*ref_count == 0) {
                delete this->ptr;
                delete ref_count;
            }
        }

        if (ptr) {
            this->ptr = ptr;
            this->ref_count = new size_t(1);
        } else {
            this->ptr = nullptr;
            ref_count = nullptr;
        }
    }
    
private:
    T* ptr;
    size_t* ref_count;  // shared among copies
};

int main() {
    std::cout << "=== Basic Construction ===\n";
    SharedPtr<int> p1(new int(42));
    std::cout << "p1.use_count(): " << p1.use_count() << " (expect 1)\n";
    std::cout << "*p1: " << *p1 << " (expect 42)\n";

    std::cout << "\n=== Copy Constructor ===\n";
    SharedPtr<int> p2 = p1;
    std::cout << "p1.use_count(): " << p1.use_count() << " (expect 2)\n";
    std::cout << "p2.use_count(): " << p2.use_count() << " (expect 2)\n";
    std::cout << "*p2: " << *p2 << " (expect 42)\n";

    std::cout << "\n=== Scope Test (destructor) ===\n";
    {
        SharedPtr<int> p3 = p1;
        std::cout << "p1.use_count() inside scope: " << p1.use_count() << " (expect 3)\n";
    }
    std::cout << "p1.use_count() after scope: " << p1.use_count() << " (expect 2)\n";

    std::cout << "\n=== Copy Assignment ===\n";
    SharedPtr<int> p4(new int(100));
    std::cout << "p4 before assignment: " << *p4 << " (expect 100)\n";
    p4 = p1;
    std::cout << "p4 after assignment: " << *p4 << " (expect 42)\n";
    std::cout << "p1.use_count(): " << p1.use_count() << " (expect 3)\n";

    std::cout << "\n=== Move Constructor ===\n";
    SharedPtr<int> p5(new int(200));
    std::cout << "p5.use_count() before move: " << p5.use_count() << " (expect 1)\n";
    SharedPtr<int> p6 = std::move(p5);
    std::cout << "p6.use_count() after move: " << p6.use_count() << " (expect 1)\n";
    std::cout << "p5.use_count() after move: " << p5.use_count() << " (expect 0)\n";
    std::cout << "*p6: " << *p6 << " (expect 200)\n";

    std::cout << "\n=== Move Assignment ===\n";
    SharedPtr<int> p7(new int(300));
    p6 = std::move(p7);
    std::cout << "p6 after move assign: " << *p6 << " (expect 300)\n";
    std::cout << "p7.use_count(): " << p7.use_count() << " (expect 0)\n";

    std::cout << "\n=== operator-> ===\n";
    SharedPtr<std::string> ps(new std::string("hello"));
    std::cout << "ps->size(): " << ps->size() << " (expect 5)\n";
    std::cout << "ps->c_str(): " << ps->c_str() << " (expect hello)\n";

    std::cout << "\n=== get() ===\n";
    int* raw = p1.get();
    std::cout << "*raw: " << *raw << " (expect 42)\n";

    std::cout << "\n=== unique() ===\n";
    SharedPtr<int> p8(new int(999));
    std::cout << "p8.unique(): " << p8.unique() << " (expect 1)\n";
    SharedPtr<int> p9 = p8;
    std::cout << "p8.unique() after copy: " << p8.unique() << " (expect 0)\n";

    std::cout << "\n=== reset() ===\n";
    std::cout << "p1.use_count() before reset: " << p1.use_count() << "\n";
    p1.reset();
    std::cout << "p1.use_count() after reset(): " << p1.use_count() << " (expect 0)\n";
    p1.reset(new int(500));
    std::cout << "*p1 after reset(new int): " << *p1 << " (expect 500)\n";
    std::cout << "p1.use_count(): " << p1.use_count() << " (expect 1)\n";

    std::cout << "\n=== Empty SharedPtr ===\n";
    SharedPtr<int> empty;
    std::cout << "empty.use_count(): " << empty.use_count() << " (expect 0)\n";
    std::cout << "empty.get(): " << empty.get() << " (expect 0/nullptr)\n";
    SharedPtr<int> empty2 = empty;  // copy empty
    std::cout << "empty2.use_count(): " << empty2.use_count() << " (expect 0)\n";

    std::cout << "\n=== Self Assignment ===\n";
    SharedPtr<int> p10(new int(123));
    p10 = p10;
    std::cout << "*p10 after self-assign: " << *p10 << " (expect 123)\n";
    std::cout << "p10.use_count(): " << p10.use_count() << " (expect 1)\n";

    std::cout << "\n=== All tests complete ===\n";
    return 0;
}