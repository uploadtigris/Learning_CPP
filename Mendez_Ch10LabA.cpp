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

void sort(int array[], int size)
{
    int sortedArray;
    return sort(array, array + size);
}

int findMedian(int array[], int size)
{
    //even function
    int arrayMedianValue;
    int greaterMiddleValue;
    int lesserMiddleValue;
    int ss1;
    int ss2;

    //odd function
    int z;

    if ( size % 2 == 0) // is even
    {
        //find avg of middle two values
        greaterMiddleValue = (size / 2);
        lesserMiddleValue = (greaterMiddleValue - 1);
        ss1 = lesserMiddleValue;
        ss2 = greaterMiddleValue;
        arrayMedianValue = ((array[ss1] + array[ss2]) / 2);

    }
    else if (size % 2 == 1) // is odd
    {
        //find median value
        z = ((size - 1) / 2); //SubScript for middle value
        int p = z;
        arrayMedianValue = array[p];

    }
    return arrayMedianValue;
}

int main() {

    int evenArray[] = { 17, 32, 45, 68, 99, 101, 67, 89, 22, 27 };
    int oddArray[] = { 17, 32, 45, 68, 99, 101, 67, 89, 22};

    int evenArrSize = sizeof(evenArray) / sizeof(evenArray[0]);
    int oddArrSize = sizeof(oddArray) / sizeof(oddArray[0]);

    //size
    cout << evenArrSize << endl;
    cout << oddArrSize << endl << endl;

    //unsorted
    printArray(evenArray, evenArrSize);
    cout << endl;
    printArray(oddArray, oddArrSize);
    cout << endl;

    //sort
    //sort(evenArray, evenArray + evenArrSize);
    //sort(oddArray, oddArray + oddArrSize);

    sort(evenArray, evenArrSize);
    sort(oddArray, oddArrSize);

    //sorted
    printArray(evenArray, evenArrSize);
    cout << endl;
    printArray(oddArray, oddArrSize);
    cout << endl << endl;

    //find median values

    //void findMedian(int array[], int size)
    cout << findMedian(evenArray, evenArrSize);
    cout << endl;
    cout << findMedian(oddArray, oddArrSize);
    cout << endl;




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

