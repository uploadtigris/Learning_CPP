//###########################################################################
// *** Assignment is not Complete ***
//
// Lab 10 (B), Version 1
// Name (Developer): Tigris Mendez
// Class: COSC~1337
// Proffesor: Jorgenson
// Date: 11/12/2021
//
// Purpose of Program:
//      To find # of movies college students see per month.
//      Asks the user how many student surveyed and dynamically allocates
//      an array of that size.
//      Then, the user will enter the number of movies that each student has seen.
//      Then, the program will set the scores and calculate the average.
//
//###########################################################################
#include <iostream>
using namespace std;

void printArray(int* array, int size)
{
    int e;
    for(e = 0; e < size; e++)
    {
        cout << e;
        cout << array[e] << " ";
    }
}

int getData(int student)
{
    int numWatched = 0;
    int a = 0;

    cout << "enter num of movies watched for student number ";
    cin >> numWatched;

    do  // repeat until numWatched >= 0
    { a = numWatched; }
    while(numWatched >= 0 || numWatched != NAN);

    return a;
}

void sort(int array, int size)
{
    return sort(array, array + size);
}

int average(int array, int size)
{
    int totalSum = 0;

    for(int i = 0; i < size; i++)
    {
        totalSum += array[i];
    }

     int average = (totalSum / size);
}

int main() {

    int size;

    cout << "please enter the number of students: ";
    cin >> size;
    cout << size << endl;

    int *array = new int[size];

    /*for(int i = 0; i < arraySize; i++)
    {
        f[arraySize] = 0;
    }*/

    for(int i = 0; i < size; i++)
    {
        array[i] = getData(i);
    }

    printArray(array, size);

    // delete [] array;    -> use at some point
    return 0;
}

//Pseudo Code:

//main
    // cout << "number of students:"
    //cin >> array size;
    //create array the size of 'array size' input;
   //print average
    // destruct the array

//Get the data
    // obtain the number of movies watched by each college student
    // input validation: number of movies must be positive

//Sort the data
    //sort given array in ascending order
    //use the STL sort function

//Display
    //print the sorted array list of number of movies watched to screen.

//Average
    // Calculates the avg. of the movies watched by students and returns it to the main function.

