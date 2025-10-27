namespace A { void bar(int); }
namespace B { void bar(double); }

using namespace A;
using namespace B;

bar(42);    // OK - calls A::bar(int) - exact match wins
bar(3.14);  // OK - calls B::bar(double)
bar(true);  // ERROR: ambiguous (both need conversion)