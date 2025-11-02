#include <iostream>
#include <memory>
#include <mutex>

class MyClass {
public:
    MyClass() {
        std::cout << "Constructor invoked" << std::endl;
    }

    ~MyClass() {
        std::cout << "Destructor invoked" << std::endl;
    }

};

int main()
{
    std::weak_ptr<int> wePtr1;
    {
        std::shared_ptr<int> shPtr1 = std::make_shared<int>(25);
        wePtr1 = shPtr1;

        std::cout << *shPtr1 << std::endl;
        if (auto p = wePtr1.lock()) {
            std::cout << *shPtr1 << std::endl;

        }
    }


    // {
    // std::shared_ptr<MyClass> shPtr1 = std::make_shared<MyClass>();
    // std::cout << "Shared count: " << shPtr1.use_count() << std::endl;

    // {
    // std::shared_ptr<MyClass> shPtr2 = shPtr1;
    // std::cout << "Shared count: " << shPtr1.use_count() << std::endl;
    // }

    // std::cout << "Shared count: " << shPtr1.use_count() << std::endl;
    // }

    // {
    // std::unique_ptr<MyClass> unPtr1 =  std::make_unique<MyClass>();
    // }


    // std::unique_ptr<int> unPtr1 = std::make_unique<int>(25);
    // std::unique_ptr<int> unPtr2 = std::move(unPtr1);

    // std::cout << *unPtr2 << std::endl;

    // std::cout << unPtr1 << std::endl;
    // std::cout << *unPtr1 << std::endl;



    return 0;
}