#include <iostream>
#include <string_view>
#include <string>
#include <array>

class Animal
{
protected:
    std::string m_name;

    // We're making this constructor protected because
    // we don't want people creating Animal objects directly,
    // but we still want derived classes to be able to use it.
    Animal(std::string_view name)
        : m_name{ name }
    {
    }

    // To prevent slicing (covered later)
    Animal(const Animal&) = delete;
    Animal& operator=(const Animal&) = delete;

public:
    std::string_view getName() const { return m_name; }
    std::string_view speak() const { return "???"; }
};

class Cat: public Animal
{
public:
    Cat(std::string_view name)
        : Animal{ name }
    {
    }

    std::string_view speak() const { return "Meow"; }
};

class Dog: public Animal
{
public:
    Dog(std::string_view name)
        : Animal{ name }
    {
    }

    std::string_view speak() const { return "Woof"; }
};

// template <typename T>
// void report(const T& rAnimal)
// {
//     std::cout << rAnimal.getName() << " says " << rAnimal.speak() << '\n';
// }


int main()
{
    // const Cat cat{ "Fred" };
    // std::cout << "cat is named " << cat.getName() << ", and it says " << cat.speak() << '\n';
    // report(cat);

    // const Dog dog{ "Garbo" };
    // std::cout << "dog is named " << dog.getName() << ", and it says " << dog.speak() << '\n';
    // report(dog);

    // const Animal* pAnimal{ &cat };
    // std::cout << "pAnimal is named " << pAnimal->getName() << ", and it says " << pAnimal->speak() << '\n';

    // pAnimal = &dog;
    // std::cout << "pAnimal is named " << pAnimal->getName() << ", and it says " << pAnimal->speak() << '\n';

    // const auto& cats{ std::to_array<Cat>({{ "Fred" }, { "Misty" }, { "Zeke" }}) };
    // const auto& dogs{ std::to_array<Dog>({{ "Garbo" }, { "Pooky" }, { "Truffle" }}) };

    // Before C++20
    const std::array<Cat, 3> cats{{ { "Fred" }, { "Misty" }, { "Zeke" } }};
    const std::array<Dog, 3> dogs{{ { "Garbo" }, { "Pooky" }, { "Truffle" } }};

    for (const auto& cat : cats)
    {
        std::cout << cat.getName() << " says " << cat.speak() << '\n';
    }

    for (const auto& dog : dogs)
    {
        std::cout << dog.getName() << " says " << dog.speak() << '\n';
    }

    return 0;
}