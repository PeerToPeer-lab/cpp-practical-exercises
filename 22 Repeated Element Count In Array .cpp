/*
Exercise 22
Programming Advice - Course 5
Solved in October 2024
*/

#include <iostream>
using namespace std;
int ReadPositivNumber(string Message) {
	int n;
	do {
		cout << Message;
		cin >> n;
	} while (n <= 0);
	return n;
}

int TimeRepeated(int Elment, int ArrayOfElements[], int NumberOfElements) {
	int Counter = 0;
	for (int i = 0; i < NumberOfElements; i++)
	{
		if (ArrayOfElements[i] == Elment)
			Counter++;
	}
	return Counter;
}

void ReadArray(int Array[], int& ArrayLength) {
	ArrayLength=ReadPositivNumber("Enter the number of element\t");

	cout <<"Enter array elements:\n";
	for (int i =0; i < ArrayLength; i++)
	{
		cout << "Element[" << i+1 << "]: ";
		cin >> Array[i];
	}
}

void PrintArray(int ArrayElement[], int ArrayLength) {
	for (int i = 0; i < ArrayLength; i++)
	{
		cout << ArrayElement[i] << " ";
	}
}

void Output() {
	int Array[100];
	int ArrayLength;
	ReadArray(Array, ArrayLength);
	int NumberToCheck = ReadPositivNumber("Enter the number you want to chek\t");
	cout << "Original array: ";
	PrintArray(Array, ArrayLength);
	cout << endl << NumberToCheck <<" is repeated "
		 << TimeRepeated(NumberToCheck, Array, ArrayLength)
		<< " time(s)";
}

int main()
{
	Output();
	return 0;
}
