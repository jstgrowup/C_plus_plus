#include <iostream>
using namespace std;
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
    std::cout << "x = " << x << std::endl
              << "y = " << y;
    // to remove the repetition of the std we can just define using namespace std; at the top level
    return 0;
}