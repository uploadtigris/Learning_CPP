//###########################################################################
// *** Assignment is Complete ***
//
// Lab 6.1, Version 1
// Name (Developer): Tigris Mendez
// Class: COSC~1337
// Proffesor: Jorgenson
// Date: 10/01/2021
//
// Purpose of Program:
//      Determines which of four companies had
//      the highest sales per the quarter.
//###########################################################################

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//take in division name as argument each time program is run to prompt the user.
int getSales(string division)
{
    int salesFigure;

    cout << "Enter the quarterly sales for the " << division << " division:";
    cin >> salesFigure;

    while (salesFigure < 0)
    {
        cout << "Sales figures cannot be negative. Please re-enter.\n";
        cout << "Enter the quarterly sales for the " << division << " division:\n";
        cin >> salesFigure;
    }

    return(salesFigure);
}

//compare all of the integer arguments
int findHighest(int NE, int SE, int NW, int SW){

    if ( NE > SE && NE > NW && NE > SW)
    {
        cout << "The Northeast Division had the highest sales this quarter.";
        return(NE);
    }
    else if (SE > NE && SE > NW && SE > SW)
    {
        cout << "The Southeast Division had the highest sales this quarter.";
        return(SE);
    }
    else if (NW > NE && NW > SE && NW > SW)
    {
        cout << "The Northwest Division had the highest sales this quarter.";
        return(NW);
    }
    else if (SW > NE && SW > SE && SW > NW)
    {
        cout << "The Southwest Division had the highest sales this quarter.";
        return(SW);
    }
    else
    {
        cout << "Seems to be that all of these values are equal.";
    }
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

int main() {
    int NE, SE, NW, SW;

    string div1 = "North East";
    NE = getSales(div1);

    string div2 = "South East";
    SE = getSales(div2);

    string div3 = "North West";
    NW = getSales(div3);

    string div4 = "South West";
    SW = getSales(div4);

cout << endl;
cout << endl;

    int (a) = findHighest(NE, SE, NW, SW);
    cout << "\nTheir sales were $" << a << "\n";

}
