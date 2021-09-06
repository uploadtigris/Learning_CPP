//###########################################################################
// *** Assignment is Complete ***
//
// Lab 2.2, Verison 1
// Name (Developer): Tigris Mendez
// Class: COSC~1337
// Proffesor: Jorgenson
// Date: 9/3/2021
//
// Purpose of Program:
//      Convert inches of height to Feet and remaining inches.
//###########################################################################

#include <iostream>
using namespace std;

int main() {

    int heightInInches = 75;
    int inchesInAFoot = 12;

    int feet = heightInInches / inchesInAFoot;
    int remainingInches = heightInInches % inchesInAFoot;

    cout << "A " << heightInInches << " inch tall basketball player" << " is " << feet <<
    " feet " << "and " <<  remainingInches << " inches tall."<< endl;

    return 0;
}
