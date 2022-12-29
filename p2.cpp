#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "ENter your age" << endl;
    cin >> age;
    if (age >= 18)
    {
        cout << "You can drive";
    }
    else
    {
        cout << "You cannot drive";
    }
    return 0;
}