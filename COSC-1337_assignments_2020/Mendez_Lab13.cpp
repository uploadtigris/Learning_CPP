#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

//testing prototype;
void testBits(fstream &);

int main() {
    ////////////////////////////////////////////////////////////////////
    /*

    //this function encrypts the cin
    int i, x;
    char str[75];

    cout << "Please enter a string:\t";
    cin >> str;

    cout << "\n Please choose following options:\n";
    cout << "1 = Encrypt the string.\n";
    cout << "2 = Decrypt the string.\n";
    cin >> x;

    switch(x)
    {
        case 1:
            for(i = 0; (i<75 && str[i]!='\0');i++)
                str[i]=str[i]+10;

                cout << "\nEncrypted string:" << str << endl;
                break;

        case 2:
            for(i = 0; (i<75 && str[i]!='\0');i++)
            str[i] = str[i]-10;
            cout << "\nDecrypted string: " << str << endl;
            break;
            default:
                cout << "\nInvalid Input!!!\n";
    }

    */
    ///////////////////////////////////////////////////////////////////


    int ans;
    //string in;
    cout << "Press 1 to Encrypt file.\n Press 2 to Decrypt file." << endl;
    cin >> ans;

    if(ans == 1)
    {
        cout << "you have chose to Encrypt: " << endl;
        char c;
        char z[50];
        fstream buckyFile;
        ofstream fout;

        buckyFile.open("tuna.txt", ios::out);
        //in = "encrypt_output";
        fout.open("tuna2.txt", ios::out);

        cout << "Please enter the text to be encrypted: " << endl;
        cin >> z;

        char*


        /*while(!buckyFile.eof())
        {
            buckyFile >> noskipws >> c;
            int temp = (c + 10);
            fout << (char)temp;
        }*/

        buckyFile.close();
        fout.close();

        testBits(buckyFile);
    }
    else if (ans == 2)
    {
        cout << "you have chose to Decrypt: " << endl;
        char c;
        char z[50];
        fstream buckyFile;
        ofstream fout;

        buckyFile.open("tuna2.txt", ios::out);
        //in = "decrypt_output";
        fout.open("tuna.txt", ios::out);

        cout << "Please enter the text to be decrypted: " << endl;
        cin >> z;
        buckyFile << z;

        while(!buckyFile.eof())
        {
            buckyFile >> noskipws >> c;
            int temp = (c - 10);
            fout << (char)temp;
        }
        buckyFile.close();
        fout.close();

        testBits(buckyFile);
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
    // prompt a user to enter info
    //'open' new file
    // read contents of the file into buffer
    // add '10' to the ASCII values for each character in the char array.
    // create a second file for the decrypted.
    // write the buffer into a new file.


