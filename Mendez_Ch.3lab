#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

    const double ACTUAL_TO_ASSESSED_RATE = 0.60;

    float taxRate, actualValue;

    cout << "Enter the actual property value:" << setw(2) << "$" << fixed << setprecision(2);
    cin >> actualValue;
    cout << "Enter the amount of tax per $100 of assessed value:" << setw(2) << "$" << fixed << setprecision(2);
    cin >> taxRate;

    double assessedValue = ACTUAL_TO_ASSESSED_RATE * actualValue;
    double propertyTax = assessedValue / 100 * taxRate;

    cout << "Property Value:" << "   " << "$" << setw(12) << actualValue << endl;
    cout << "Assessed Value:" << "   " << "$" << setw(12) << assessedValue << endl;
    cout << "Property Tax:" << "     " << "$" << setw(12) << propertyTax << endl;

}
