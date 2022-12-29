#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3};
    cout << "the array is " << arr[0];
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
        /* code */
    }
    cout << marks;
    int arr2d[2][2] = {
        {1, 2},
        {3, 4}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << i << j << endl;
        }
    }
    {
        /* code */
    }

    return 0;
}