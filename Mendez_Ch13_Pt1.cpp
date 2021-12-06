//###########################################################################
// *** Assignment is Complete ***
//
// Lab 13, Version 2
// Name (Developer): Tigris Mendez
// Class: COSC~1337
// Proffesor: Jorgenson
// Date: 12/4/2021
//
// Purpose of Program:
//      The purpose of the program is to decrypt a created text file.
//###########################################################################

#include <iostream>
#include <fstream>
using namespace std;

void testBits(fstream &);

int main() {
    cout << "This program encrypts the file: " << endl;
    char c;
    fstream myfile, mynewfile, fout;

    //___________________________________________________________

    myfile.open("newfile.txt", fstream::out);

    cout << "myfile open status:" << endl;
    testBits(myfile);
    if (!myfile)
    {
        cout << "The file was not opened!" << endl << "\n";
    }
    else
        cout << " file opened successfully!" << endl << "\n";

    //___________________________________________________________

    myfile << "This file has some writing\n"
              "The writing is on the file\n"
              "The file do be having writing\n"
              "It really do be having writing\n"
              "This program encrypts/ decrypts\n"
              "It makes me feel like a hacker *^*\n";

    cout << "myfile write status:" << endl;
    testBits(myfile);
    cout << "\n";

    myfile.close();

    //___________________________________________________________


    myfile.open("newfile.txt", fstream::in);
    cout << "myfile open status:" << endl;
    testBits(myfile);
    if (!myfile)
    {
        cout << "The file was not opened!" << endl << "\n";
    }
    else
        cout << " file opened successfully!" << endl << "\n";

    //___________________________________________________________

    mynewfile.open("newnewfile.txt", fstream::out);
    cout << "myfile open status:" << endl;
    testBits(myfile);
    if (!mynewfile)
    {
        cout << "The file was not opened!" << endl << "\n";
    }
    else
        cout << " file opened successfully!" << endl << "\n";

    //___________________________________________________________

    while (myfile >> noskipws >> c) { //you could but a " testBits(myfile); for each while loop to test read but this would have 50+ messages.
        int temp = (c + 5);
        mynewfile << (char) temp;
    }
    cout << "mynewfile write status:" << endl;
    testBits(mynewfile); cout << "\n";

    myfile.close();
    mynewfile.close();
}

void testBits(fstream& testFile)
{
    cout << "eof(): " << testFile.eof() << endl;
    cout << "good(): " << testFile.good() << endl;
    cout << "bad(): " << testFile.bad() << endl;
    cout << "fail(): " << testFile.fail() << endl;

}
