/*
Exercise 28
Programming Advice - Course 5
Solved in October 2024
*/

#include <iostream>
#include <cstdlib>
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
	ArrayLength= ReadPositivNumberLess100("Please enter a number of elements\t");

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
void CopyArray(int Array[], int Array2[],  int ArrayLength) {
	for (int i = 0; i < ArrayLength; i++)
	{
		Array2[i] = Array[i];
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int Array[100];
	int Array2[100];
	int ArrayLength;
	FillArrayWithRandomNumbers(Array, ArrayLength);
	cout << "Array 1 elements are : \n";
	PrintArray(Array, ArrayLength);

	CopyArray(Array, Array2,ArrayLength);
	cout << "\n Array 2 elements after copy : \n" ;
	PrintArray(Array2, ArrayLength);
	return 0;
}
