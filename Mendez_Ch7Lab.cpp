//###########################################################################
// *** Assignment is Complete ***
//
// Lab 7.3, Version 2 (Professor Revised)
// Name (Developer): Tigris Mendez
// Class: COSC~1337
// Professor: Jorgenson
// Date: 10/16/2021
//
// Purpose of Program:
//      After retrieving the total price of a bill, this program will compute
//      the necessary tip at a percentage also given by the user.
//###########################################################################


//some sudocode!!
//
// taxRate (private) set by a ONE parameter constructor
            // when Tips object created, passes value to taxRate
            // if no argument passed, the default is 0.085
                    // use a default constructor for this value

// Tips class
    //has taxRate as a private member
    //only One Public function, computeTip
        //computeTip accepts TWO arguments.
            //(total bill amount , and taxRate's stored value.)
            // subtracts tax from meal cost with tax
            // calculates gratuity from meal w/o tax included


// main
    // create an instance of Tips
    // utilize the Tips object in a for loop
        //at end of loop ask "another tip (y/n)?"

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
//making class variables public is not the best practice
//An object is how you access stuff *inside the class

class Tips
{
private:
    float taxRate;

public:

    float tipRate;

    void set_tax(int givenTaxRate)
    {
        if (givenTaxRate > 0)
        {
            tipRate = givenTaxRate;
        }
        else if (! isdigit(givenTaxRate))
        {
            taxRate = 0.085;
        }
    };
    double computeTip(float totalBillAmount, float taxRate)
    {
        double billWithoutTax = totalBillAmount * (1 + taxRate/100);
        double tip = billWithoutTax * (tipRate/100);
        return tip;
    }
};

float getTax() {
    float tax;
    cout << "Tax % for this location: ";
    cin >> tax;

    while (tax < 0) {
            cout << "Tax % cannot be less than 0. Please re-enter tax %; " << endl;
            cout << "Tax % for this location: ";
            cin >> tax;
        }
    return tax;
}

int main()
{
    cout << "\nThis program will compute a restaurant tip based on\n"
        "the total bill amount and the % the patron wishes to\n"
        "tip the server.\n\n" << endl;

    float tax{getTax()};

    float billTotal;
    float desiredTipRate;
    char doIRunAgain = 'y';

    Tips obj2;
    obj2.set_tax(tax);

    while (doIRunAgain == 'y') {
        cout << "**************** Tip Helper *****************\n";
        cout << "Enter total bill amount: ";
        cin >> billTotal;
        cout << "Enter tip rate %: ";
        cin >> desiredTipRate;

        cout << "Your tip is: " << obj2.computeTip(billTotal, desiredTipRate) << endl;
        cout << "Do you want to do another? (type y or n) : ";
        cin >> doIRunAgain;
    }

    cout << "Okay! Thank you for using Tip Helper. Have a pleasant day.";

}
