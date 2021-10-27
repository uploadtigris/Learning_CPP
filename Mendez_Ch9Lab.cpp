//###########################################################################
// *** Assignment is Complete ***
//
// Lab 9, Version 1
// Name (Developer): Tigris Mendez
// Class: COSC~1337
// Proffesor: Jorgenson
// Date: 10/27/2021
//
// Purpose of Program:
//              Take inputs from the user and sort them into alphabetical
//              order.
//
// Sorting Visualised:
//      https://www.youtube.com/watch?v=kPRA0W1kECg&t=33s
//
//###########################################################################

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Playlist
{
    string Artist;
    string title;
};

void bubbleSort(Playlist[], int);

int main() {
    const int NUM_ENTRIES = 10;
    Playlist entry[NUM_ENTRIES];
    int count;

// The Inputs;
//===============================================================================

    for (count = 0; count < NUM_ENTRIES; count++ )
    {
        cout << "Please enter artist # " << count+1 << ": " << endl;
        getline(cin, entry[count].Artist );
        cout << "Please enter song name # " << count+1 << ": " << endl;
        getline(cin, entry[count].title);
    }

// The Outputs;
//===============================================================================

    cout << "\n\n"; cout << "The Unsorted Playlist is: " << endl;
    cout << left << setw(20) << "Artist" << "Title" << endl;
    cout << "========================================" << endl;

    for(count = 0; count < NUM_ENTRIES; count++)
    {
        cout << left << setw(20) <<  entry[count].Artist <<  entry[count].title << endl;
    }
    system("pause");

    bubbleSort(entry, NUM_ENTRIES);

    cout << "\n\n"; cout << "The Sorted Playlist is: " << endl;
    cout << left << setw(20) << "Artist" << "Title" << endl;
    cout << "========================================" << endl;

    for(count = 0; count < NUM_ENTRIES; count++)
    {
        cout << left << setw(20) << entry[count].Artist <<  entry[count].title << endl;
    }

    return 0;
}

// The 'Void'
//===============================================================================

// Bubble Sort
void bubbleSort(Playlist array[], int size)
{
    bool madeAswap = true;

    for (int maxElement = size - 1; maxElement > 0 && madeAswap; maxElement--)
    {
        madeAswap = false;

        for (int index = 0; index < maxElement; index++)
        {
            if (array[index].Artist > array[index + 1].Artist)
            {
                 swap(array[index], array[index + 1]);
                 madeAswap = true;
            }
        }
    }
}

// swap
void swap(Playlist &a, Playlist &b)
{
    Playlist temp = a;
    a = b;
    b = temp;
}
