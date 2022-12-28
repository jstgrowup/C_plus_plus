#include <iostream>
int main()
{
    int a = 0;
    int b = 1;
    int temp = 0;
    temp = a;
    a = b;
    b = temp;

    std::cout << b;
    return 0;
}