/*
Exercise 31
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

void FillArrayFrom1ToN(int Array[], int ArrayLength) {
	for (int i = 0; i < ArrayLength; ++i) {
		Array[i] = i + 1;
	}
}

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void ShuffleArray(int Array[],int ArrayLength) {
	for (int i = 0; i < ArrayLength; i++)
	{
		swap(Array[RandomNumber(1, ArrayLength)-1], Array[RandomNumber(1, ArrayLength)-1]);
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int Array1[100];
	int ArrayLength= ReadPositivNumberLess100("Please enter a number of elements\t");
	FillArrayFrom1ToN(Array1, ArrayLength);
	cout << "Array elements before shuffle: \n";
	PrintArray(Array1, ArrayLength);
	cout << endl << endl << endl;


	ShuffleArray(Array1, ArrayLength);
	cout << "Array elements after shuffle: \n";
	PrintArray(Array1, ArrayLength);
	cout << endl << endl << endl;
	return 0;
}
