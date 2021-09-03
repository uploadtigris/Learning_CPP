//###########################################################################
// Lab 2.1, Version 1
// Name (Developer): Tigris Mendez
// Class: COSC~1337
// Proffesor: Jorgenson
// Date: 9/3/2021
//
// Purpose of Program:
//      Return the required upsell to receive a desired profit on a product.
//###########################################################################

#include <iostream>
using namespace std;

int pricePerDrive = 8;
auto desireProfit = 0.35;

int main() {
    // (8 * 0.35) + 8 = 10.8
    float priceForDesiredProfit = (pricePerDrive + (pricePerDrive * desireProfit));
    cout << "To have a 35% profit, the flash drive should sell for $" << priceForDesiredProfit << endl;
    return 0;
}