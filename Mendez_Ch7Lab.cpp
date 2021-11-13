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
//      To find avg # of movies college students see per month.
//      Asks the user how many student surveyed and dynamically allocates
//      an array of that size.
//      Then, the user will enter the number of movies that each student has seen.
//      Then, the program will set the scores and calculate the average.
//
//###########################################################################
#include <iostream>
#include <algorithm>
using namespace std;

void printArray(float* array, int size)
{
    int e;
    for(e = 0; e < size; e++)
    {
        cout << "Student " << (e+1) << ": " << array[e] << endl;
    }
}

void getData(float* array, int size)
{
    float numMoviesWatched = 0;
    float a = 0;


    for(int i = 0; i < size; i++)
    {
        float *ptr = &array[i];

        cout << "enter num of movies watched for student number " << (i+1) << endl;
        cin >> numMoviesWatched;

        do {
            a = numMoviesWatched;
             break;
           }
        while(numMoviesWatched >= 0 || isdigit(numMoviesWatched));

        *ptr = a;
    }
}

void sort(float* arr, int size)
{
    return sort(arr,arr + size);
}

float average(float *arr, float size)
{
    float totalSum = 0;

    for(int j = 0; j < size; j++)
    {
        float *ptr = &arr[j];
        totalSum += *ptr;
    }
    cout << totalSum << endl;

    float average = (totalSum / size);

    return average;
}

int main() {

    int size = 0;
    float *iptr;

    cout << "please enter the number of students:";
    cin >> size;

    do
    {
        cout << "There are " << size << " students" << endl;
        break;
    }
    while (size >= 0 || isdigit(size));

    iptr = new float[size];   //create array

    for(int count = 0; count < size; count++)    //populate the new array with variables
    {
        iptr[count] = 1;
    }

    getData(iptr, size);

    cout << "Number of Movies Watched" << endl;
    cout << "------------------------" << endl;
    printArray(iptr, size);
    sort(iptr, size);
    cout << "--------" << endl;
    cout << "Average  " << average(iptr, size);



    delete [] iptr;    //-> use at some point

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

