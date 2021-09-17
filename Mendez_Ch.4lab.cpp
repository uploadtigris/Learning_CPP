#include <iostream>
#include <string>

using namespace std;

int main() {

    int FEET_PER_SECOND_AIR,FEET_PER_SECOND_WATER, FEET_PER_SECOND_STEEL; // Constants
    int inputNumber;
    string materialTraveledThrough;
    double feet, result;

    FEET_PER_SECOND_AIR = 1100;         /* option 1 */
    FEET_PER_SECOND_WATER = 4,900;      /* option 2 */
    FEET_PER_SECOND_STEEL = 16,400;     /* option 3 */

    cout << "\nThis Program will tell you how long it takes a sound wave\n"
            "to travel a specific distance through a particular medium.\n\n";

    cout << "Select a substance for the sound to travel through:\n";
    cout << "      " << "1. Air\n";
    cout << "      " << "2. Water\n";
    cout << "      " << "3. Steel\n\n";
    cout << "Enter # & press <ENTER>:";
    cin >> inputNumber;

    cout << "Enter the number of feet the sound wave will travel: \n";
    cin >> feet;

    switch(inputNumber)
    {
        case 1:
            result = FEET_PER_SECOND_AIR * feet ;
            materialTraveledThrough = "Air";
            break;
        case 2:
            result = FEET_PER_SECOND_WATER * feet ;
            materialTraveledThrough = "Water";
            break;
        case 3:
            result = FEET_PER_SECOND_STEEL *feet ;
            materialTraveledThrough = "Steel";
            break;
        default:
            cout << "\n\n *** Please enter a valid result... *** \n";
            return -1;
    };


    cout << "The sound wave will travel " << feet << " feet through the " << materialTraveledThrough << " in " << result << " seconds.\n\n";

    return 0;
}
