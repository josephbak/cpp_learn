#include <iostream>

class Base
{
public:
	void print() const
	{
		std::cout << "Base";
	}
};

class Derived : public Base
{
private:
	void print() const
	{
		std::cout << "Derived ";
	}
};


int main()
{
	Derived derived {};
	derived.print(); // calls derived::print(), which is public
	return 0;
}