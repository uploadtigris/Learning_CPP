
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
#include <fstream>

using namespace std;

class PayRoll
{
private:
    int hourlyRatePay, hoursWorked;

public:
    void set_hourlyRate(int givenHourlyRate)
    {
        if (givenHourlyRate > 0)
        {
            hourlyRatePay = givenHourlyRate;
        }
        else
        {
            cout << "Error with file";
        }
    }

    void set_hoursWorked(int givenHoursWorked)
    {
        if (givenHoursWorked > 0)
        {
            hoursWorked = givenHoursWorked;
        }
        else
        {
            cout << "Error with file";
        }
    }

    float grossPay;

    float calculateGrossPay(int hourlyRatePay, int hoursWorked)
    {
        float grossPay = (hoursWorked * hourlyRatePay);
        return grossPay;
    }
};

typedef int arrayType[];            //typedef

void showValues(arrayType , int); //funciton prototype

int main() {
    int i;
    const int SIZE = 7;
    //seven PayRoll objects in an Array;
    int obj0;

    //first loop
    ifstream item("payroll.txt");
    if(item.is_open()) {
        string obj0[7];

        for (int i = 0; i < 7; i++) {
            item >> obj0[i];
        }
    }

    int set1[] = { 1, 2, 3, 4, 5, 6, 7};
    showValues(set1, SIZE);



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

void showValues(arrayType nums, int size)
{
    for (int index = 0; index < size; index++)
        cout << nums[index] << " ";
    cout << endl;
}
