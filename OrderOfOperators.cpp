#include <iostream>
// int main()
// {
//     double x = 1 + 2 * 3;
//     // the multiplication will beb executed first and then the addition - 7
//     // but lets say if you wrap the 1+2 in paranthesis then that part will be executed first
//     std::cout << x;
//     return 0;
// }
int main()
{
    int z = 12;
    int x = 12;
    int y = (z + 10);
    double div = (x + 10) / (3 * y);
    std::cout << div;

    return 0;
}