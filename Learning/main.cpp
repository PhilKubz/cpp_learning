#include <iostream>

using namespace std;

int main() {
    double sales = 95000;
    cout << "Sales = $" << sales << endl;

    const double stateTaxRate = .04;
    cout << "State Tax = $" << sales * stateTaxRate << endl;

    const double countyTaxRate = .02;
    cout << "County Tax = $" << sales * countyTaxRate;

    return 0;
}