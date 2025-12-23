#include <iostream>
#include <string>

template<typename T>
class Vector {
public:
    // constructor
    Vector() : data(new T[4]), sz(0), cap(4) {}

    // destructor
    ~Vector() {
        delete[] data;
    }

    // copy constructor
    Vector(const Vector& other) {
        sz = other.sz;
        cap = other.cap;
        data = new T[other.cap];
        for (size_t i = 0; i < other.sz; ++i) {
            data[i] = other.data[i];
        }
    }

    // copy assignment
    Vector& operator=(const Vector& other) {
        if (this == &other) return *this;

        delete[] data;

        sz = other.sz;
        cap = other.cap;
        data = new T[other.cap];
        for (size_t i = 0; i < other.sz; ++i) {
            data[i] = other.data[i];
        }

        return *this;
    }

    // move constructor
    Vector(Vector&& other) noexcept {
        data = other.data;    // take the pointer
        sz = other.sz;
        cap = other.cap;
        
        other.data = nullptr; // leave source in valid empty state
        other.sz = 0;
        other.cap = 0;
    }


    // move assignment
    Vector& operator=(Vector&& other) noexcept {
        if (this == &other) return *this;

        delete[] data;

        data = other.data;
        sz = other.sz;
        cap = other.cap;
        
        other.data = nullptr; 
        other.sz = 0;
        other.cap = 0;

        return *this;
    }

    
    void push_back(const T& value) {
        if (sz == cap) {
            resize(cap * 2);
        }

        data[sz] = value;
        sz++;
    }

    void pop_back() {
        if (sz == 0) return;
        sz--;
    }

    T& operator[](size_t index) {
        return data[index];
    }

    const T& operator[](size_t index) const {
        return data[index];
    }

    size_t size() const {
        return sz;
    }
    size_t capacity() const {
        return cap;
    }

    bool empty() const {
        return sz == 0;
    }

    void clear() {
        sz = 0;
    }
    
private:
    T* data;
    size_t sz;
    size_t cap;
    
    void resize(size_t new_cap) {
        T* tmp = new T[new_cap]; // pointing to the newly made array

        // copy all elements from one to the other
        for (size_t i = 0; i < sz; ++i) {
            tmp[i] = data[i];
        }
        cap = new_cap;
        delete[] data; // free the memory?
        data = tmp; // data pointing to tmp
    }
};

// int main() {
//     Vector<int> v;
//     v.push_back(1);
//     std::cout << v[100] << "\n";  // boom
//     return 0;
// }

int main() {
    std::cout << "=== Basic Operations ===\n";
    Vector<int> v;
    std::cout << "empty: " << v.empty() << " (expect 1)\n";
    std::cout << "size: " << v.size() << " (expect 0)\n";
    
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    std::cout << "after push 1,2,3 — size: " << v.size() << " (expect 3)\n";
    std::cout << "v[0]: " << v[0] << " (expect 1)\n";
    std::cout << "v[2]: " << v[2] << " (expect 3)\n";
    
    v[1] = 99;
    std::cout << "v[1] after assignment: " << v[1] << " (expect 99)\n";
    
    v.pop_back();
    std::cout << "after pop_back — size: " << v.size() << " (expect 2)\n";
    
    v.clear();
    std::cout << "after clear — size: " << v.size() << ", empty: " << v.empty() << " (expect 0, 1)\n";

    std::cout << "\n=== Capacity Growth ===\n";
    Vector<int> v2;
    for (int i = 0; i < 10; ++i) {
        v2.push_back(i);
        std::cout << "size: " << v2.size() << ", cap: " << v2.capacity() << "\n";
    }

    std::cout << "\n=== Copy Constructor ===\n";
    Vector<int> v3;
    v3.push_back(10);
    v3.push_back(20);
    Vector<int> v4 = v3;  // copy constructor
    std::cout << "v3[0]: " << v3[0] << ", v4[0]: " << v4[0] << " (both expect 10)\n";
    v4[0] = 999;
    std::cout << "after v4[0]=999 — v3[0]: " << v3[0] << ", v4[0]: " << v4[0] << " (expect 10, 999)\n";

    std::cout << "\n=== Copy Assignment ===\n";
    Vector<int> v5;
    v5.push_back(100);
    v5 = v3;  // copy assignment
    std::cout << "v5[0]: " << v5[0] << " (expect 10)\n";
    v5[0] = 888;
    std::cout << "after v5[0]=888 — v3[0]: " << v3[0] << " (expect 10, unchanged)\n";

    std::cout << "\n=== Move Constructor ===\n";
    Vector<int> v6;
    v6.push_back(50);
    v6.push_back(60);
    Vector<int> v7 = std::move(v6);  // move constructor
    std::cout << "v7[0]: " << v7[0] << ", v7[1]: " << v7[1] << " (expect 50, 60)\n";
    std::cout << "v6.size(): " << v6.size() << " (expect 0)\n";

    std::cout << "\n=== Move Assignment ===\n";
    Vector<int> v8;
    v8.push_back(1);
    Vector<int> v9;
    v9.push_back(200);
    v9.push_back(300);
    v8 = std::move(v9);  // move assignment
    std::cout << "v8[0]: " << v8[0] << ", v8[1]: " << v8[1] << " (expect 200, 300)\n";
    std::cout << "v9.size(): " << v9.size() << " (expect 0)\n";

    std::cout << "\n=== String Type ===\n";
    Vector<std::string> vs;
    vs.push_back("hello");
    vs.push_back("world");
    std::cout << "vs[0]: " << vs[0] << ", vs[1]: " << vs[1] << " (expect hello, world)\n";

    std::cout << "\n=== Const Access ===\n";
    const Vector<int>& cv = v8;
    std::cout << "const access cv[0]: " << cv[0] << " (expect 200)\n";
    // cv[0] = 5;  // uncomment to verify: should not compile

    std::cout << "\n=== All tests complete ===\n";
    return 0;
}