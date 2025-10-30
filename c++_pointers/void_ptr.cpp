#include <iostream>

void printNumber(int* numberPtr) {
    std::cout << *numberPtr << std::endl;
}

void printLetter(char* charPtr) {
    std::cout << *charPtr << std::endl;
}

void print(void* ptr, char type) {
    switch (type) {
        case 'i':
            //handle int*
            // std::cout << ptr << std::endl;
            std::cout << *((int *) ptr) << std::endl; break;
        case 'c':
            //handle char*
            std::cout << *((char *) ptr) << std::endl; break;
    }
}

int main() {

    int number = 5;
    char letter = 'a';

    // printNumber(&number);
    // printLetter(&letter);

    print(&number, 'i');
    print(&letter, 'c');
    
    return 0;
}