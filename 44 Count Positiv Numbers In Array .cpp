/*
Exercise 44
Programming Advice - Course 5
Solved in October 2024
*/


#include <iostream>
using namespace std;
int ReadNumber(string Message) {
	int n;
	cout << Message;
	cin >> n;
	return n;
}
int Random(int From, int To) {
	return rand() % (To - From + 1) + From;
}

void FillArrayWithRandomNumbers(int Array[], int& ArrayLength) {
	ArrayLength = ReadNumber("Please enter a number of elements\t");

	for (int i = 0; i < ArrayLength; i++)
	{
		Array[i] = Random(-100, 100);
	}
}


void PrintArray(int Array[], int ArrayLength) {
	for (int i = 0; i < ArrayLength; i++)
	{
		cout << Array[i] << " ";
	}
}

int CountPositivNumbersInArray(int Array[],int ArrayLength) {
	int Counter = 0;
	for (int i = 0; i < ArrayLength; i++)
	{
		if (Array[i] >= 0)
			Counter++;
	}
	return Counter;
}

int main() {
	int Array[100];
	int ArrayLength ;
	FillArrayWithRandomNumbers(Array, ArrayLength);
	PrintArray(Array,ArrayLength);
	cout << "\nOdd Numbers count is\t" << CountPositivNumbersInArray(Array, ArrayLength);
	return 0;
}
