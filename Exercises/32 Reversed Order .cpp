/*
Exercise 32
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

int RandomNumber(int From, int To) {
	return rand() % (To - From + 1) + From;
}

void PrintArray(int Array[], int ArrayLength) {
	for (int i = 0; i < ArrayLength; i++)
	{
		cout << Array[i] << " ";
	}
}

void FillArrayWithRandomNumbers(int Array[], int& ArrayLength) {
	for (int i = 0; i < ArrayLength; i++)
	{
		Array[i] = RandomNumber(1, 100);
	}
}

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void InversedOrder(int Array[],int ArrayLength) {
	for (int i = 0; i < ArrayLength/2; i++)
	{
		swap(Array[i], Array[ArrayLength-i-1]);
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int Array1[100];
	int ArrayLength= ReadPositivNumberLess100("Please enter a number of elements\t");
	FillArrayWithRandomNumbers(Array1, ArrayLength);
	cout << "Array 1 elements : \n";
	PrintArray(Array1, ArrayLength);
	cout << endl << endl << endl;

	InversedOrder(Array1, ArrayLength);
	cout << "Array 2 elements after copying array 1 in inversed order: \n";
	PrintArray(Array1, ArrayLength);
	cout << endl << endl << endl;
	return 0;
}
