int main()
{
    int const value { 5 };
    const int* ptr { &value }; // a const pointer to a const value

    return 0;
}