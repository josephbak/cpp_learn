#include <string_view>

//In the case where we want to prevent inheriting from a class, the final specifier is applied after the class name:


class A
{
public:
	virtual std::string_view getName() const { return "A"; }
};

class B final : public A // note use of final specifier here
{
public:
	std::string_view getName() const override { return "B"; }
};

class C : public B // compile error: cannot inherit from final class
{
public:
	std::string_view getName() const override { return "C"; }
};