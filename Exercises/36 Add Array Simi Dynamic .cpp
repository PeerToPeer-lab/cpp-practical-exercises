/*
Exercise 36
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
bool ReadBoolNumber(string Message) {
	bool n;
	do {
		cout << Message;
		cin >> n;
	} while (n<0 || n>1);
	return n;
}
void AddArrayElement(int Element,int Array[],int& size) {
	size++;
	Array[size - 1] = Element;
}
void InputUserElementsInArray(int Array[],int& size) {
	bool AddMore=true;
	do {
		AddArrayElement(ReadNumber("Please enter a number?\t"), Array, size);
		cout << ("Do you want to add more numbers?[0]:No[1]:Yes\t");
		cin >> AddMore;		
	} while (AddMore);

}

void PrintArray(int Array[], int ArrayLength) {
	for (int i = 0; i < ArrayLength; i++)
	{
		cout << Array[i] << " ";
	}
}

int main()
{
	int size = 0;
	int Array[100];
	InputUserElementsInArray(Array,size);
	cout << "Array Length: " << size <<endl;
	cout << "Array Elements are: ";
	PrintArray(Array, size);
}
