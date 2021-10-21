
//###########################################################################
// *** Assignment is in Progress ***
//
// Lab 8, Version 1
// Name (Developer): Tigris Mendez
// Class: COSC~1337
// Proffesor: Jorgenson
// Date: 10/21/2021
//
// Purpose of Program:
//      This program reads the hours worked and pay-rate for each employee
//      on a provided list and will return the gross pay for each employee.
//
//###########################################################################

#include <iostream>
#include <string>
using namespace std;

class PayRoll
{
private:
    int hourlyRatePay;
    int hoursWorked;
public:
    //members to:
        //set hourly pay rate and number of hours worked
        // and calculate gross pay.
};

int main() {
    std::cout << "!" << std::endl;

    //seven PayRoll objects;
    PayRoll payroll1;
    PayRoll payroll2;
    PayRoll payroll3;
    PayRoll payroll4;
    PayRoll payroll5;
    PayRoll payroll6;
    PayRoll payroll7;

    //first loop reads the number of hours each employee worked
    //also reads their hourly pay rate from a file and call
    //class set functions to store this information in the appropriate
    // objects

    //second loop; call class function for each object, to return
    //employee's gross pay (an individual's total earnings throughout
    //                      a given period before any deductions are made.)

    string n = "number";
    cout << "Employee" << "   " << "Gross pay" << endl;
    cout << "========" << "   " << "=========" << endl;
    cout << "   1:   " << "   " << "$ " << n   << endl;
    cout << "   2:   " << "   " << "$ " << n   << endl;
    cout << "   3:   " << "   " << "$ " << n   << endl;
    cout << "   4:   " << "   " << "$ " << n   << endl;
    cout << "   5:   " << "   " << "$ " << n   << endl;
    cout << "   6:   " << "   " << "$ " << n   << endl;
    cout << "   7:   " << "   " << "$ " << n   << endl;


    return 0;
}
