/*
Exercise 30
Programming Advice - Course 5
Solved in October 2024
*/

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int ReadPositivNumberLess100(string Message) {
	int n;
	do {
		cout << Message;
		cin >> n;
	} while (n <= 0 || n > 100);
	return n;
}

int Random(int From, int To) {
	return rand() % (To - From + 1) + From;
}

void FillArrayWithRandomNumbers(int Array[], int& ArrayLength) {

	for (int i =0; i < ArrayLength; i++)
	{
		Array[i] = Random(1,100);
	}
}

void PrintArray(int Array[], int ArrayLength) {
	for (int i = 0; i < ArrayLength; i++)
	{
		cout << Array[i] << " ";
	}
}


void SumTwoArrays(int Array1[], int Array2[], int Array3[], int ArrayLength) {
	for (int i = 0; i < ArrayLength; i++)
	{
		Array3[i] = Array1[i] + Array2[i];
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int Array1[100];
	int Array2[100];
	int Array3[100];
	int ArrayLength= ReadPositivNumberLess100("Please enter a number of elements\t");
	FillArrayWithRandomNumbers(Array1, ArrayLength);
	cout << "Array 1 elements : \n";
	PrintArray(Array1, ArrayLength);
	cout << endl << endl << endl;

	FillArrayWithRandomNumbers(Array2, ArrayLength);
	cout << "Array 2 elements : \n";
	PrintArray(Array2, ArrayLength);
	cout << endl << endl << endl;

	SumTwoArrays(Array1, Array2,Array3, ArrayLength);
	cout << "sum of array 1 and array 2 elements: \n";
	PrintArray(Array3, ArrayLength);
	
	return 0;
}
