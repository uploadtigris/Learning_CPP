//###########################################################################
// *** Assignment is not Complete ***
//
// Lab 12, Part 1
// Name (Developer): Tigris Mendez
// Class: COSC~1337
// Profesor: Jorgenson
// Date: 11/24/2021
//
// Purpose of Program:
//             This program will separate words with a space if the words are
//              entered with a capitalized letter for every word that needs
//              to be divided with a space.
//
//###########################################################################
#include <iostream>
#include <cstring>
using namespace std;

void convert(char* array[])
{

}


int main() {
    cout << "Hello! Welcome to the Word Separator program" << endl;
    cout << "Please enter text as a running total of words w/o any spaces below..." << endl;

    char arr[100];
    cin.getline(arr, 100);

    int size;
    size = strlen(arr);
    int n = 0;

    //model function
    for(int i = 0; i < size; i++)
    {
        if(!islower(arr[i]))
            cout << ' ';
            cout << arr[i];
    }
    return 0;
}

//Pseudo code:
//
//Main ~>
//      Prompt user to enter a string as all one word with caps
//      for every index "i" in the array, search to see if that indexed char isupper
//      if upper, cout a space before
//
//      output
