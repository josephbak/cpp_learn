#include <iostream>

int main()
{ // outer block

    int x { 5 }; // x enters scope and is created here

    { // nested block
        int y { 7 }; // y enters scope and is created here

        // x and y are both in scope here
        std::cout << x << " + " << y << " = " << x + y << '\n';
    } // y goes out of scope and is destroyed here

    // y can not be used here because it is out of scope in this block

    return 0;
} // x goes out of scope and is destroyed here