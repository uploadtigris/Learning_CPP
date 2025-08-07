//###########################################################################
// *** Assignment is Complete ***
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
#include <string>
using namespace std;

int main() {
    int size;
    int newsize;
    int newnewsize;
    string sentence;
    string newSentence;
    string newnewSentence;
    string finalSentence;
    string firstChar;

    cout << "Hello! Welcome to the Word Separator program" << endl;
    cout << "Please enter text as a running total of words w/o any spaces below..." << endl;

    //prompt user for input
    getline(cin, sentence);

    //Separates words with spaces
    size = sentence.length();
    for(int i=0; i < size; i++)
    {
        if (!islower(sentence[i]))
        {
            newSentence += " ";
        }
        newSentence += sentence[i];
    }

    // locate everything in sentence except the first character
    newsize = newSentence.length();
    for(int i=1; i < newsize; i++)
    {
        newnewSentence += newSentence[i+1];
    }

    //first character
    firstChar = sentence[0];

    //make the separated sentence all lower case
    newnewsize = newnewSentence.length();
    for(int n=0; n < newnewsize; n++)
    {
        newnewSentence[n] = tolower(newnewSentence[n]);
    }

    //concatenate;
    finalSentence = firstChar + newnewSentence;

    cout << "The Sentence you input was: " << "'"<< sentence << "'" << endl;
    cout << finalSentence << endl;

    return 0;
}

// Output Testers
//cout << newSentence << endl;
//cout << newnewSentence << endl;
//cout << firstChar << endl;
