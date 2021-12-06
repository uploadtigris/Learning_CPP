//###########################################################################
// *** Assignment is Complete ***
//
// Lab 13, Version 1 (Encryption)
// Name (Developer): Tigris Mendez
// Class: COSC~1337
// Proffesor: Jorgenson
// Date: 12/4/2021
//
// Purpose of Program:
//      The purpose of the program is to decrypt a text file.
//###########################################################################

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char c;
    string z;
    fstream myfile, mynewfile, fout;

    myfile.open("newfile.txt", fstream::out);
    myfile << "This file has some writing\n"
              "The writing is on the file\n"
              "The file do be having writing\n"
              "It really do be having writing\n"
              "This program encrypts/ decrypts\n"
              "It makes me feel like a hacker *^*\n";
    myfile.close();

    myfile.open("newfile.txt", fstream::in);
    mynewfile.open("newnewfile.txt", fstream::out);

    while (myfile >> noskipws >> c) {
        int temp = (c + 5);
        mynewfile << (char) temp;
    }

    myfile.close();
    mynewfile.close();
}
