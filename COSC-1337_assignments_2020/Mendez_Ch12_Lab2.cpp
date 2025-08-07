//###########################################################################
// *** Assignment is Complete ***
//
// Lab 12, Part 2
// Name (Developer): Tigris Mendez
// Class: COSC~1337
// Profesor: Jorgenson
// Date: 11/27/2021
//
// Purpose of Program:
//          Use the functions "upper, lower, and flip" accepting a C~string
//          as an argument.
//          The output of the function will be the original function manipulated
//          by each of the different functions.
//
//###########################################################################
#include <iostream>
#include <cstring>
using namespace std;

void upper(char arr[])
{
    unsigned long int len = strlen(arr);
    for (int i = 0; i < len; i++)
    {
        arr[i] = toupper(arr[i]);
    }
}

void lower(char arr[])
{
    unsigned long int len = strlen(arr);
    for (int i = 0; i < len; i++)
    {
        arr[i] = tolower(arr[i]);
    }
}

void flip(char arr[])
{
    unsigned long int len = strlen(arr);
    for (int i = 0; i < len; i++)
    {
        if(isupper(arr[i]))
        {
            arr[i] = tolower(arr[i]);
        }
        else if (islower(arr[i]))
        {
            arr[i] = toupper(arr[i]);
        }
    }
}

int main() {
    cout << "Welcome to the Case Manipulator program!" << endl;
    cout << "Please enter a sentence of text of text" << endl;

    char sentence[256], flipSentence[256], upperSentence[256], lowerSentence[256];

    cin.getline(sentence, 256);

    strcpy(upperSentence, sentence);
    strcpy(lowerSentence, sentence);
    strcpy(flipSentence, sentence);

    upper(upperSentence);
    lower(lowerSentence);
    flip(flipSentence);



    cout << "You entered the sentence: " << "'" << sentence << "'" << endl;
    cout << upperSentence << endl;
    cout << lowerSentence << endl;
    cout << flipSentence << endl;

    return 0;
}

//Pseudo Code
//  upper:
//      take ever char in sentence and convert it to an upper case letter;
//
//  lower:
//      take every char in sentence and convert it to an a lower letter.
//
//  toSwitch:
//      for every char in sentence
//          if char is lower, make upper
//          if char is upper, make lower.
