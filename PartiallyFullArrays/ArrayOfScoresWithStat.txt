// This program loads an array of doubles with students' score
// Array of scores with stat
// Programmer: Panupong Leenawarat
// Last modified: 12/9/2015

#include "pototypes.h"
#include <iostream>
 using namespace std;

int main()  // main done
{
	const int SIZE_OF_ARRAY = 30;
	double aScore[SIZE_OF_ARRAY];
	int logicalSizeArrayOfScore;
	double maxValue, minValue, average;
	
	system("COLOR 3F");

	while (true)
	{
		printTitle();

		cout
			<< "Enter the students\' score. Enter a negative value to stop." << endl
			<< "\t[Physical size of the array is " << SIZE_OF_ARRAY << "]." << endl << endl;
		logicalSizeArrayOfScore = loadArrayOfScore(aScore, SIZE_OF_ARRAY);

		cout
			<< "\n\tDone loading scores" << endl
			<< "\tLogical size is: " << logicalSizeArrayOfScore << endl << endl;

		cout << "Hit ENTER to see the array: ";
		cin.ignore(80, '\n');

		cout << "\n\nNow printing the scores :" << endl;
		if (logicalSizeArrayOfScore != 0)
			printArray(aScore, logicalSizeArrayOfScore);
		
		average = getAverage(aScore, logicalSizeArrayOfScore);
		cout
			<< endl << endl
			<< "\t*** The highest score is: " << aScore[findIndexMin(aScore, logicalSizeArrayOfScore)] << endl
			<< "\t*** The lowest  score is: " << aScore[findIndexMax(aScore, logicalSizeArrayOfScore)] << endl
			<< "\t*** The average score is: " << average << endl;
		
		cout << "\t------------------------------";
		cout << endl << endl;
		system("pause");
		system("cls");
	}
	return 0;
}