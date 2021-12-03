#include <iostream>
#include <fstream>
using namespace std;

//testing prototype;
void testBits(fstream &);

int main() {

    int ans;
    string in;
    cout << "Press 1 to Encrypt file.\n Press 2 to Decrypt file." << endl;
    cin >> ans;

    if(ans == 1)
    {
        char c;
        ifstream buckyFile;
        ofstream fout;
        buckyFile.open("tuna.txt", fstream::out | fstream::in | ios::binary);
        in = "output";
        fout.open("tuna2.txt", fstream::out | fstream::in | ios::binary);
        while(!buckyFile.eof())
        {
            buckyFile >> noskipws >> c;
            int temp = (c + 10);
            fout << (char)temp;
        }
        buckyFile.close();
        fout.close();
    }
    else if (ans == 2)
    {
        char c;
        ifstream buckyFile;
        ofstream fout;
        buckyFile.open("tuna.txt", fstream::out | fstream::in | ios::binary);
        in = "decrpyt_output";
        fout.open("tuna2.txt", fstream::out | fstream::in | ios::binary);
        while(!buckyFile.eof())
        {
            buckyFile >> noskipws >> c;
            int temp = (c - 10);
            fout << (char)temp;
        }
        buckyFile.close();
        fout.close();
    }



    return 0;
}

void testBits(fstream& buckyFile)
{
    cout << "eof(): " << buckyFile.eof() << endl;
    cout << "good(): " << buckyFile.good() << endl;
    cout << "bad(): " << buckyFile.bad() << endl;
    cout << "fail(): " << buckyFile.fail() << endl;

}
 //Pseudo Code:
    // prompt a user to
    //'open' new file
    // read contents of the file into buffer
    // add '10' to the ASCII values for each character in the char array.
    // create a second file for the decrypted.
    // write the buffer into a new file.
