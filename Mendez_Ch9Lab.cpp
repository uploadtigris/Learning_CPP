//###########################################################################
// *** Assignment is not Complete ***
//
// Lab 8, Version 3
// Name (Developer): Tigris Mendez
// Class: COSC~1337
// Proffesor: Jorgenson
// Date: 10/21/2021
//
// Purpose of Program:
//
//
//
// Sorting Visualised:
//          Sort user input-ed artist and songs into an alphabetically ordered playlist.
//
//      https://www.youtube.com/watch?v=kPRA0W1kECg&t=33s
//
//###########################################################################

#include <iostream>
#include <string>
using namespace std;

struct Playlist
{
    string Artist;
    string title;
};

int main() {
    const int NUM_ENTRIES = 10;
    Playlist entry[NUM_ENTRIES];
    int count;

    for (count = 0; count < 10; count++ )
    {
        cout << "Please enter artist # " << count+1 << ": " << endl;
        getline(cin, entry[count].Artist );
        cout << "Please enter song name # " << count+1 << ": " << endl;
        getline(cin, entry[count].title);
    }

    

    return 0;
}
