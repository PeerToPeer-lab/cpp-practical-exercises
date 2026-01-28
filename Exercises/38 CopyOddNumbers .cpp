/*
Exercise 38
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
		Array[i] = Random(1, 100);
	}
}

void AddArrayElement(int Array[], int& Array2Length, int Element) {
	Array2Length++;
	Array[Array2Length - 1] = Element;
}

void CopyOddNumbers(int Array1[], int Array2[], int Array1Length,int& Array2Length) {
	for (int i = 0; i < Array1Length; i++)
	{
		if(Array1[i]%2 !=0 )
			AddArrayElement(Array2, Array2Length, Array1[i]);
	}
}


void PrintArray(int Array[], int ArrayLength) {
	for (int i = 0; i < ArrayLength; i++)
	{
		cout << Array[i] << " ";
	}
}

int main()
{
	int Array1Length = 0;
	int Array2Length = 0;
	int Array1[100];
	int Array2[100];
	FillArrayWithRandomNumbers(Array1,Array1Length);
	cout << "Array 1 elements are : \n";
	PrintArray(Array1, Array1Length);

	CopyOddNumbers(Array1,Array2, Array1Length, Array2Length);
	cout << "\n Array 2 elements after copy : \n";
	PrintArray(Array2, Array2Length);

	return 0;
}
