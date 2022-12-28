#include <iostream>
int main()
{
    int x = 10;
    // cout represents the standard output stream
    // stream represents a sequence of characters and standard output is the console window
    // << is known as stream insertion operator its an operator used to insert something into the output stream
    int y = 20;
    std::cout << "x = ";
    std::cout << x;
    // one another way is
    std::cout << "x = " << x;
    // this is called chaining multiple operators
    std::cout << "y = " << y << std::endl;
    std::cout << "y = " << y;

    return 0;
}