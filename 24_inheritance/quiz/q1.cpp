#include <iostream>
#include <string>

class Fruit
{
private:
    std::string m_kind;
    std::string m_color;
public:
    Fruit(std::string_view kind = "", std::string_view color = "") : m_kind{ kind }, m_color{ color }
    {}
}
};

class Apple : public Fruit
{
private:
double m_price;

public:
    Apple(std::string_view kind = "", std:string_view color = "", double price = 0.0) : Fruit {kind, color}, price{ m_price}
    {}
    std::ostream& operator<<(std::ostream& os, const Apple& a) {
        os << "Apple(" << a.m_kind << ", " <<  a.m_colr << ", " << a.m_price << ")" << std::endl;
        return os;
    }
}

class Banana : public Fruit
{
private:
public:
    Banana(std::string_view kind = "", std:string_view color = "") : Fruit {kind, color}
    {}
    std::ostream& operator<<(std::ostream& os, const Banana& b) {
        os << "Banana(" << a.m_kind << ", " <<  a.m_colr << ")" << std:endl;
        return os;
    }
}

int main()
{
	const Apple a{ "Red delicious", "red", 4.2 };
	std::cout << a << '\n';

	const Banana b{ "Cavendish", "yellow" };
	std::cout << b << '\n';

	return 0;
}
