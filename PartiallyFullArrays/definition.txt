#include "pototypes.h"
#include <iostream>
#include <iomanip>
using namespace std;

// definitions done
void printTitle(ostream &os)     // done
{
	os
		<< endl
		<< "\t     This program loads an array of doubles with students' score    " << endl
		<< "\t            using a negative value as the loop's sentinel           " << endl
		<< "\t             setting physical size to 3 for easy testing            " << endl
		<< "\t                          By Lee. Panupong                          " << endl << endl;
}

int loadArrayOfScore(double a[], int ls)    // done
{
	double input;
	int logical = 0;

	for (; logical < ls; logical++)
	{
		cout << "Enter score for student " << (logical + 1) << ": ";
		input = getNumberLessThanOrEqual(100);
		if (input < 0)
			return logical;
		a[logical] = input;
	}
	cout << "Array FULL! Cannot accept any more scores\n\n";
	return logical;

}

double getNum()     //   done
{
	double number;

	while (!(cin >> number))
	{
		cout << "\tNo letters please. Try again: ";
		cin.clear();
		cin.ignore(80, '\n');
	}
	cin.ignore(80, '\n');
	return number;
}

void printArray(double a[], int ls, int line, ostream &os)         // done
{
	for (int i = 0; i < ls; i++)
		os << setw(4) << a[i] << ((i + 1) % line == 0 ? "\n" : "      ");
}

double getNumberLessThanOrEqual(double y)               // done
{
	double x = getNum();

	while (x > y)
	{
		cout << "Invalid score. Scores cannot be greater than " << y << ".Try again: ";
		x = getNum();
	}
	return x;
}

int findIndexMax (double a[], int ls)
{
	int max = 0;

	for (int i = 0; i < ls; i++){
		if (a[max] <= a[i])
			max = i;
	}
	return max;
}

int findIndexMin(double a[], int ls) 
{
	int min = 0;
	
	for (int i = 0; i < ls; i++){
		if (a[min] >= a[i])
			min = i;
	}
	return min;
}

double getAverage(double a[], int ls) 
{
	double sum = a[0];
	for (int i = 1; i < ls; ++i) {
		sum += a[i];
	}
	return sum / ls;
}