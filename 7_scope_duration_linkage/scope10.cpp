namespace A {
    void foo() { /* A's version */ }
}

namespace B {
    void foo() { /* B's version */ }
}

using namespace A;
using namespace B;

int main() {
    foo();  // ERROR: ambiguous call to 'foo'
}