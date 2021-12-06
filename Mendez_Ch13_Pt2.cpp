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
//      The purpose of the program is to decrypt a text file.
//###########################################################################
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char c;
    string z;
    fstream myfile, mynewfile, mydecryptedfile;

    mynewfile.open("encrypted.txt", fstream::out); //newnewfile.txt is the same as file from program Part 1
    mynewfile << "Ymnx%knqj%mfx%xtrj%|wnynsl\u000FYmj%|wnynsl%nx%ts%ymj%knqj\u000FYmj%knqj%it%gj%mf{nsl%|wnynsl\u000FNy%wjfqq~%it%gj%mf{nsl%|wnynsl\u000FYmnx%uwtlwfr%jshw~uyx4%ijhw~uyx\u000FNy%rfpjx%rj%kjjq%qnpj%f%mfhpjw%/c/\u000F";
    mynewfile.close();

    mynewfile.open("encrypted.txt", fstream::in);
    mydecryptedfile.open("decrypted.txt", fstream::out);

    while(mynewfile >> noskipws >> c)
    {
        int temp = (c - 5);
        mydecryptedfile << (char)temp;
    }

    mydecryptedfile.close();
    mynewfile.close();
    return 0;
}
