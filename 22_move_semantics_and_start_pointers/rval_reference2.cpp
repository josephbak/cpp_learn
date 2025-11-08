#include <iostream>

void fun(const int& lref) // l-value arguments will select this function
{
	std::cout << "l-value reference to const: " << lref << '\n';
}

void fun(int&& rref) // r-value arguments will select this function
{
	std::cout << "r-value reference: " << rref << '\n';
}

int main()
{
	int x{ 5 };
	fun(x); // l-value argument calls l-value version of function
	fun(3); // r-value argument calls r-value version of function

    int&& rref {7}; // rref is an lvalue of type int&&.
    fun(rref); // The type of an object and its value category are independent.

	return 0;
}