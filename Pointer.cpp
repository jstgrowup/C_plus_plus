#include <iostream>
using namespace std;
int main()
{
    int a = 90;
    int *ptr;
    ptr = &a;
    cout << *ptr;
    return 0;
}