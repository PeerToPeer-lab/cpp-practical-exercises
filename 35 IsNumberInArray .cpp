/*
Exercise 35
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


short ReturnNumberIndexInArray(int Array[], int ArrayLength, int NumberToSearsh) {
	for (int i = 0; i < ArrayLength; i++)
	{
		if (Array[i] == NumberToSearsh) {
			return i;
		}
	}
	return -1;
}

bool IsNumberInArray(int Array[],int ArrayLength,int NumberToSearsh) {

	return ReturnNumberIndexInArray(Array, ArrayLength, NumberToSearsh) != -1;

}
int main()
{
	srand((unsigned)time(NULL));
	int Array[100];
	int ArrayLength = ReadPositivNumberLess100("Please enter a number of elements\t");
	FillArrayWithRandomNumbers(Array, ArrayLength);
	PrintArray(Array, ArrayLength);
	cout << endl << endl;
	int NumberToSearsh = ReadPositivNumberLess100("Please enter a number to searsh for?\t");
	cout << "Number you are looking for is: \t" << NumberToSearsh <<endl;


	if (IsNumberInArray(Array, ArrayLength, NumberToSearsh))
		cout << "Yes the number is found ";
	else
		cout << "The number is not found:-(";
	
	return 0;
}
