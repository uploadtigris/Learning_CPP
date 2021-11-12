//###########################################################################
// *** Assignment is Complete ***
//
// Lab 10 (A), Version 1
// Name (Developer): Tigris Mendez
// Class: COSC~1337
// Proffesor: Jorgenson
// Date: 11/11/2021
//
// Purpose of Program:
//          To sort two list of numbers as arrays (one even, one odd) and
//          then return the median value.
//
//###########################################################################

#include <iostream>
#include <algorithm> //for the sort function
using namespace std;

//pass arrays as pointers
void printArray(int *array, int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

void sort(int *array, int size)
{
    return sort(array, array + size);
}

int findMedian(const int *array, int size)
{
    //even function
    int arrayMedianValue = 0;
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

    sort(evenArray, evenArrSize);
    sort(oddArray, oddArrSize);

    cout << "Median of the odd array:" << "\n\n"
    << "("; printArray(oddArray, oddArrSize); cout << ")" << "\n\n";
    cout << "[is " << findMedian(oddArray, oddArrSize) << "]" << "\n\n";

    cout << "Median of the even array:" << "\n\n"
    << "("; printArray(evenArray, evenArrSize); cout << ")" << "\n\n";
    cout << "[is " << findMedian(evenArray, evenArrSize) << "]" << "\n\n";

    return 0;
}



// Pseudo Code:

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
            // print contents of each array element i.
            // when i >= size of array, then stop the loop.

