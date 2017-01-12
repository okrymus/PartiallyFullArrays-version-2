// Functions Pototype
#include <iostream>
#include <string>

using namespace std;
// Pre condition:  NONE
// Post condition: Print a centered title for the program
void printTitle(ostream &os = cout);

// Pre condition:  a[0],....,a[n-1] ask student score to hold sorted in 
//                 increasing order n < a.length
// Post condition: Return "size" as logical size of a[]
//                 a[] is holding student scores
int loadArrayOfScore(double a[], int size);

// Pre condition:  NONE
// Post condition: Return a valid double number
//                 it does not crashes for non-numeric input   
//                 removes everything else from the cin
double getNum();

// Pre condition:  a[0],....,a[n-1] contain student score sorted in 
//                 increasing order n < a.length
// Post condition: Print the "size" elements of a[] per n line
void printArray(double a[], int size, int line = 5, ostream &os = cout);

// Pre condition:   y is an double number
// Post coundition: Return a number which is less than or equal y
double getNumberLessThanOrEqual(double y);

// Pre condition:  
// Post coundition: return index of highest elements in array a[] of integers score
int findIndexMax(double a[], int ls);

// Pre condition:  
// Post coundition: return index of lowest elements in array a[] of integers score
int findIndexMin(double a[], int ls);

// Pre condition:  
// Post coundition: Return a double which is the average score that 
double getAverage(double a[], int ls);


