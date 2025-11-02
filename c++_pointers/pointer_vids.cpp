#include <iostream>
#include <typeinfo>

int main() {

    struct S
    {
        virtual const char* IdentifyYourself()
        {
            return "BaseObject";
        }
    };

    struct Sa : public S
    {
        const char* IdentifyYourself()
        {
            return "SubObject A";
        }
    };

    struct Sb : public S
    {
        const char* IdentifyYourself()
        {
            return "SubObject B";
        }
    };

    // S ob_base;
    // Sa ob_A;
    // Sb ob_B;

    // std::cout << ob_base.IdentifyYourself() << std::endl;
    // std::cout << ob_A.IdentifyYourself() << std::endl;
    // std::cout << ob_B.IdentifyYourself() << std::endl;

    S** pSomeArray = new S*[5];

    pSomeArray[0] = new Sa();
    pSomeArray[1] = new Sb();
    pSomeArray[2] = new Sb();
    pSomeArray[3] = new S();
    pSomeArray[4] = new Sa();

    for (int i = 0; i < 5; i++){
        std::cout << pSomeArray[i] -> IdentifyYourself() << std::endl;
    }

    for (int i = 0; i < 5; i++) delete pSomeArray[i];


    delete[] pSomeArray;



    return 0;
}