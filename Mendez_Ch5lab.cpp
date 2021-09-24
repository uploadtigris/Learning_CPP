//###########################################################################
// *** Assignment is Complete ***
//
// Lab 5, Version 2
// Name (Developer): Tigris Mendez
// Class: COSC~1337
// Proffesor: Jorgenson
// Date: 9/24/2021
//
// Purpose of Program:
//      Ask user for the sales totals for three different stores.
//      Print amount of sales in hundreds of dollars.
//###########################################################################

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {

    float storeOneSales,
            storeTwoSales,
            storeThreeSales;

    string storeOneAsterisk, storeTwoAsterisk, storeThreeAsterisk;

    const int ONE_HUNDRED_DOLLARS = 100;


//Inputs and Validations
    //storeOneSales;
    cout << "Enter today's sales for store 1: \n";
    cin >> storeOneSales;

    if(!cin)
    {
        cout << "**** Warning! ****";
        cout << "\n**** please input an integer ****\n\n";
        abort();
    }

    //storeTwoSales;
    cout << "Enter today's sales for Store 2: \n";
    cin >> storeTwoSales;

    if(!cin)
    {
        cout << "**** Warning! ****";
        cout << "\n**** please input an integer ****\n\n";
        abort();
    }

    //    //storeThreeSales;
    cout << "Enter today's sales for store 3: \n";
    cin >> storeThreeSales;

    if(!cin)
    {
        cout << "**** Warning! ****";
        cout << "\n**** please input an integer ****\n\n";
        abort();
    }

    // if a negative number -> cout << "Please enter a positive number for Store #: ";
    if (storeOneSales > 0)
    {
        int asterisk;
        asterisk = round(storeOneSales) / ONE_HUNDRED_DOLLARS;

        for (asterisk; asterisk > 0; asterisk--)
        {
            storeOneAsterisk += '*';
        }
    } else {
        cout << "\n*** ERR: Please enter a positive number for Store 1";
    };

    if (storeTwoSales > 0)
    {
        int asterisk;
        asterisk = round(storeTwoSales) / ONE_HUNDRED_DOLLARS;

        for (asterisk; asterisk > 0; asterisk--)
        {
            storeTwoAsterisk += '*';
        }
    } else {
        cout << "\n*** ERR: Please enter a positive number for Store 2: ";
    };

    if (storeThreeSales > 0)
    {
        int asterisk;
        asterisk = round(storeThreeSales) / ONE_HUNDRED_DOLLARS;

        for (asterisk; asterisk > 0; asterisk--)
        {
            storeThreeAsterisk += '*';
        }
    } else {
        cout << "\n*** ERR: Please enter a positive number for Store 3: ";
    };

    //Results
    cout << "\n\nStore 1: " << storeOneAsterisk << '\n';
    cout << "Store 2: " << storeTwoAsterisk << '\n';
    cout << "Store 3: " << storeThreeAsterisk << '\n';

    return 0;
}
