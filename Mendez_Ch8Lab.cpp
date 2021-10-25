
//###########################################################################
// *** Assignment is Complete ***
//
// Lab 8, Version 3
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
#include <fstream>
#include <iomanip>

using namespace std;

class PayRoll
{
private:
    float hourlyRatePay, hoursWorked;

public:
    void set_hourlyRate(float givenHourlyRate)
    {
        if (givenHourlyRate > 0)
        {
            hourlyRatePay = givenHourlyRate;
        }
        else
        {
            hourlyRatePay = 0;
        }
    }

    void set_hoursWorked(float givenHoursWorked)
    {
        if (givenHoursWorked > 0)
        {
            hoursWorked = givenHoursWorked;
        }
        else
        {
            hoursWorked = 0;
        }
    }

    float calculateGrossPay()
    {
        float grossPay = (hoursWorked * hourlyRatePay);
        return grossPay;
    }
};


int main() {
    const int NUM_EMPLOYEES = 7;
    PayRoll employee[NUM_EMPLOYEES];
    int count;
    
    ifstream inputFile;
    inputFile.open("payroll.txt");

    if (!inputFile) {
        cout << "Error finding input file" << endl;
        system("pause");
        exit(-1);
    }

    count = 0;
    float hoursWorked, hourlyPay;

    while (!inputFile.eof()) {
        inputFile >> hoursWorked >> hourlyPay;
        employee[count].set_hoursWorked(hoursWorked);
        employee[count].set_hourlyRate(hourlyPay);
        count++;
    }
    inputFile.close();

    //display

    cout << "Employee" << "   " << "Gross pay" << endl;
    cout << "========" << "   " << "=========" << endl;

    for (count = 0; count < NUM_EMPLOYEES; count++)
        cout << setw(4) << count + 1 << ": " << setw(7) << "$ " << employee[count].calculateGrossPay() << endl;


    system("pause");
    return 0;
}
