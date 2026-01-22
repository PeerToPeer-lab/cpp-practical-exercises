/*
Exercise 40
Programming Advice - Course 5
Solved in October 2024
*/
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
void FillArray(int Array[], int& ArrayLegth) {
	ArrayLegth = 10;
	Array[0] = 10 ;
	Array[1] = 10;
	Array[2] = 10;
	Array[3] = 50;
	Array[4] = 50;
	Array[5] = 70;
	Array[6] = 70;
	Array[7] = 70;
	Array[8] = 70;
	Array[9] = 90;
}

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

bool IdNumberInArray(int Array[], int Elment, int ArrayLength) {
	for (int i = 0; i < ArrayLength; i++)
	{
		if (Array[i] == Elment)
			return true;
	}
	return false;
}

void AddArrayElement(int Array[], int& Array2Length, int Element) {
	Array2Length++;
	Array[Array2Length - 1] = Element;
}

void CopyDistinctNumbers(int Array1[], int Array2[], int Array1Length,int& Array2Length) {
	for (int i = 0; i < Array1Length; i++)
	{
		if(!IdNumberInArray(Array2,Array1[i], Array2Length))
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
	FillArray(Array1,Array1Length);
	cout << "Array 1 elements are : \n";
	PrintArray(Array1, Array1Length);

	CopyDistinctNumbers(Array1,Array2, Array1Length, Array2Length);
	cout << "\n Array 2 elements after copy : \n";
	PrintArray(Array2, Array2Length);

	return 0;
}
