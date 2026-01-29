/*
Exercise 41
Programming Advice - Course 5
Solved in October 2024
*/
#include <iostream>
using namespace std;
void FillArray(int Array[], int& ArrayLegth) {
	ArrayLegth = 10;
	Array[0] = 10;
	Array[1] = 10;
	Array[2] = 10;
	Array[3] = 50;
	Array[4] = 50;
	Array[5] = 50;
	Array[6] = 50;
	Array[7] = 10;
	Array[8] = 10;
	Array[9] = 10;
}

void PrintArray(int Array[], int ArrayLength) {
	for (int i = 0; i < ArrayLength; i++)
	{
		cout << Array[i] << " ";
	}
}

bool IsPalindromArray(int Array[], int ArrayLength) {
	for (int i = 0; i <= ArrayLength/2; i++)
	{
		if (Array[i] != Array[ArrayLength - i - 1])
			return false;
	}
	return true;
}

int main() {
	int Array[100];
	int ArrayLength ;
	FillArray(Array, ArrayLength);
	PrintArray(Array,ArrayLength);
	if (IsPalindromArray(Array, ArrayLength))
		cout << "\nYes array is palindrom";
	else
		cout << "\nNo array is'nt palindrom";
	return 0;
}
