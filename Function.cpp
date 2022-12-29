#include <iostream>
using namespace std;
int add(int a, int b)
{
    // this means this function will return an integer
    // it will take two arguments and
    int c;
    c = a + b;
    return c;
}
int main()
{
    cout << "the function " << add(2, 3);
    return 0;
}