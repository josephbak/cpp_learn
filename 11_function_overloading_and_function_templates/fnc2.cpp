void foo(int)
{
}

void foo(double)
{
}

int main()
{
    foo(5L); // 5L is type long

    return 0;
}