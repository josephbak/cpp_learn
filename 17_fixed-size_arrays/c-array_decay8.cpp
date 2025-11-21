#include <iostream>

void process(int arr[10]) {  // Looks like array parameter
    std::cout << sizeof(arr) << std::endl;;              // Returns 8! It's actually int*
}

int main() {
    int a[10] {};
    process(a);
    return 0;
}

/*
// Equivalent declaration:
void process(int* arr) { }   // Array syntax is just sugar
```

Function parameters **cannot** be arrays. `T arr[]` is rewritten to `T* arr` by the compiler.


**Formal:**
```
Function parameter: void f(T arr[N])
Actual type:        void f(T* arr)     // N is ignored
*/