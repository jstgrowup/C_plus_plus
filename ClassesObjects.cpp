#include <iostream>
#include <string>
using namespace std;
class Employee
{
public:
    string name;
    int salary;
    void printdetails()
    {
        cout << "i am preintdetrails" << this->salary << this->name << endl;
    }
};
int main()
{

    Employee huru;
    huru.name = "subham";
    huru.salary = 100;
    cout << huru.salary << endl;
    cout << huru.name << endl;
    huru.printdetails();
     return 0;
}