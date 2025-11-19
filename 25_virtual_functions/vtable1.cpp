class Base
{
public:
    VirtualTable* __vptr;
    virtual void function1() {};
    virtual void function2() {};
};

class D1: public Base
{
public:
    void function1() override {};
};

class D2: public Base
{
public:
    void function2() override {};
};

// int main()
// {
//     D1 d1 {};
// }

int main()
{
    D1 d1 {};
    Base* dPtr = &d1;
    dPtr->function1();

    /*
    First, the program recognizes that function1() is a virtual function.
    Second, the program uses dPtr->__vptr to get to D1’s virtual table.
    Third, it looks up which version of function1() to call in D1’s virtual table. This has been set to D1::function1().
    Therefore, dPtr->function1() resolves to D1::function1()!
    */

    return 0;
}


// int main()
// {
//     Base b {};
//     Base* bPtr = &b;
//     bPtr->function1();

//     /*
//     In this case, when b is created, b.__vptr points to Base’s virtual table, not D1’s virtual table.
//     Since bPtr is pointing to b, bPtr->__vptr points to Base’s virtual table as well.
//     Base’s virtual table entry for function1() points to Base::function1().
//     Thus, bPtr->function1() resolves to Base::function1(), which is the most-derived version of function1() that a Base object should be able to call.
//     */

//     return 0;
// }