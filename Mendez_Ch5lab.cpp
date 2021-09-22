//###########################################################################
// *** Assignment is not yet Complete ***
//
// Lab 5.1, Version 1
// Name (Developer): Tigris Mendez
// Class: COSC~1337
// Proffesor: Jorgenson
// Date: 9/22/2021
//
// Purpose of Program:
//      Ask user for the sales totals for three different stores.
//      Print amount of hundreds of dollars in sales rounded to the 100s
//      of each store.
//###########################################################################

//Stuff to work on:
//include the round function
//validate that each sales figure in >= 0 using validation loop.

#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main() {

    float storeOneSales,
            storeTwoSales,
            storeThreeSales;

    string storeOneAsterisk, storeTwoAsterisk, storeThreeAsterisk;

    const int ONE_HUNDRED_DOLLARS = 100;



    cout << "Enter today's sales for store 1: \n";
        cin >> storeOneSales;

        if(!cin)
        {
            cout << "please input an integer";
        }


    cout << "Enter today's sales for Store 2: \n";
    cin >> storeTwoSales;

    cout << "Enter today's sales for store 3: \n";
    cin >> storeThreeSales;

    // if a negative number -> cout << "Please enter a positive number for Store 1: ";
    if (storeOneSales > 0)
    {
        int asterisk;
        asterisk = storeOneSales / ONE_HUNDRED_DOLLARS;

        for (asterisk; asterisk > 0; asterisk--)
        {
            storeOneAsterisk += '*';
        }
    } else {
        cout << "Please enter a positive number for Store 1: ";
    };

    if (storeTwoSales > 0)
    {
        int asterisk;
        asterisk = storeTwoSales / ONE_HUNDRED_DOLLARS;

        for (asterisk; asterisk > 0; asterisk--)
        {
            storeTwoAsterisk += '*';
        }
    } else {
        cout << "Please enter a positive number for Store 2: ";
    };

    if (storeThreeSales > 0)
    {
        int asterisk;
        asterisk = storeThreeSales / ONE_HUNDRED_DOLLARS;

        for (asterisk; asterisk > 0; asterisk--)
        {
            storeThreeAsterisk += '*';
        }
    } else {
        cout << "Please enter a positive number for Store 3: ";
    };
    cout << "Store 1: " << storeOneAsterisk << '\n';
    cout << "Store 2: " << storeTwoAsterisk << '\n';
    cout << "Store 3: " << storeThreeAsterisk << '\n';

    return 0;
}
