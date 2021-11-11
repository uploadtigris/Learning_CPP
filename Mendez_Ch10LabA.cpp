//###########################################################################
// *** Assignment is not yet Complete ***
//
// Lab 10 (A), Version 1
// Name (Developer): Tigris Mendez
// Class: COSC~1337
// Proffesor: Jorgenson
// Date: 11/1/2021
//
// Purpose of Program:
//
//
//
//###########################################################################

#include <iostream>
#include <algorithm> //for the sort function
using namespace std;

//pass arrays as pointers
void printArray(int array[], int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

void findMedian(int array[], int size)
{

}

int main() {

    int foo [5] = { 16, 2, 77, 40, 12071 };
    int arrSize = sizeof(foo) / sizeof(foo[0]);

    cout << arrSize << endl;

    printArray(foo, arrSize);



   return 0;
}



// Pseudo Code:

// Operations Processes:
    //

// Modular Functions:
        // sort:
            //use the STL 'sort' to sort out the arrays.

        // find median:
            // find array length with the arrSize function.
            // apply the modulus operator (%) to arrSize return value.
                // if len(array) is divisible by 2 (is even) then:
                    //find the average of the middle two values
                        // (sizeOfArray / 2) = greaterMiddleValue; -> ( this is "ss2")
                        // (greaterMiddleValue - 1) = lesserMiddleValue; -> (this is "ss1")
                        // ((array[ss1] + array[ss2]) / 2) = arrayMedianValue;
                // else if len(array) is not divisible by 2
                    //find the median (middle) value.
                        // ((sizeOfArray - 1) / 2) = z; <- ( this is the middle value)
                        //  int p = z;
                        //  array[p];   <- ( this is the value of the median value)


        // printArray:
            // for loop for every subscript 'i' in array
            // print contents of each
            // when i == i - 1, then stop the loop.

