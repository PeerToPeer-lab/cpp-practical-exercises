/*
Exercise 27
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

int SumArray(int Array[], int ArrayLength) {
	int Sum = 0;
	for (int i = 0; i < ArrayLength; i++)
	{
		Sum += Array[i];
	}
	return Sum;
}

float ArrayAverage(int Array[], int ArrayLength) {
	return (float)SumArray(Array, ArrayLength)/ ArrayLength;
}

int main()
{
	srand((unsigned)time(NULL));
	int Array[100];
	int ArrauLength;
	FillArrayWithRandomNumbers(Array, ArrauLength);
	cout << "Array elemments are : \t";
	PrintArray(Array, ArrauLength);
	cout << "\n Averge of random arrayis: \t" << ArrayAverage(Array, ArrauLength);
	return 0;
}
