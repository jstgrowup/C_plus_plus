#include <iostream>
using namespace std;
int main()
{
    double sales = 95000;
    const double stateTaxRate = 0.04;
    cout << "sales: " << sales << endl;
    double stateTax = sales * stateTaxRate;
    cout << "state tax: " << stateTax << endl;
    const double countryTaxRate = 0.02;
    double countryTax = sales * countryTaxRate;
    cout << "Country Tax: " << countryTax << endl;
    double totalTax = stateTax + countryTax;
    cout << "Total: " << totalTax << endl;
    return 0;
}