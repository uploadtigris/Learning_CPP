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

//___________________________________________________________

int main() {
    char c;
    fstream myfile, mynewfile, mydecryptedfile;

    //___________________________________________________________

    mynewfile.open("encrypted.txt", fstream::out); //newnewfile.txt is the same as file from program Part 1
    cout << "myfile open status:" << endl;
    testBits(mynewfile);
    if (!mynewfile)
    {
        cout << "The file was not opened!" << endl << "\n";
    }
    else
        cout << " file opened successfully!" << endl << "\n";

    //___________________________________________________________

    mynewfile << "Ymnx%knqj%mfx%xtrj%|wnynsl\u000FYmj%|wnynsl%nx%ts%ymj%knqj\u000FYmj%knqj%it%gj%mf{nsl%|wnynsl\u000FNy%wjfqq~%it%gj%mf{nsl%|wnynsl\u000FYmnx%uwtlwfr%jshw~uyx4%ijhw~uyx\u000FNy%rfpjx%rj%kjjq%qnpj%f%mfhpjw%/c/\u000F";

    cout << "mynewfile write status:" << endl;
    testBits(mynewfile);
    cout << "\n";

    mynewfile.close();

    //___________________________________________________________

    mynewfile.open("encrypted.txt", fstream::in);
    cout << "mynewfile open status:" << endl;
    testBits(mynewfile);
    if (!mynewfile)
    {
        cout << "The file was not opened!" << endl << "\n";
    }
    else
        cout << " file opened successfully!" << endl << "\n";

    //___________________________________________________________

    mydecryptedfile.open("decrypted.txt", fstream::out);
    cout << "mydecryptedfile open status:" << endl;
    testBits(mydecryptedfile);
    if (!mydecryptedfile)
    {
        cout << "The file was not opened!" << endl << "\n";
    }
    else
        cout << " file opened successfully!" << endl << "\n";

    //___________________________________________________________

    while(mynewfile >> noskipws >> c) //you could put a " testBits(mynewfile); for each while loop to test read but this would have 50+ messages.
    {
        int temp = (c - 5);
        mydecryptedfile << (char)temp;
    }
    cout << "mydecryptedfile write status:" << endl;
    testBits(mydecryptedfile); cout << "\n";

    mydecryptedfile.close();
    mynewfile.close();
    return 0;
}

void testBits(fstream& testFile)
{
    cout << "eof(): " << testFile.eof() << endl;
    cout << "good(): " << testFile.good() << endl;
    cout << "bad(): " << testFile.bad() << endl;
    cout << "fail(): " << testFile.fail() << endl;

}
