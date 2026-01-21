/*
Exercise 29
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

bool CheckPrime(int number) {
	if (number == 1 || number == 2)
		return true;

	for (int i = 2; i <= sqrt(number); i++)
	{
		if (number % i == 0)
			return false;
	}
	return true;
}

void PrimeNumbersInArray(int Array[], int ArrayLength) {
	for (int i = 0; i < ArrayLength; i++)
	{
		if (CheckPrime(Array[i]))
			cout << Array[i] << " ";
	}
}

void CopyOnlyPrimeNumbers(int Array[], int Array2[], int& ArrayLength) {
	int Counter = 0;
	for (int i = 0; i < ArrayLength; i++)
	{
		if (CheckPrime(Array[i])) {
			Array2[Counter] = Array[i];
			Counter++;
		}
	}
	ArrayLength=Counter;
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

	CopyOnlyPrimeNumbers(Array, Array2, ArrayLength);
	cout << "\n Only prime numbers : \n";
	PrintArray(Array2, ArrayLength);
	
	return 0;
}
