/*
Exercise 09
Programming Advice - Course 5
Solved in October 2024
*/

#include <iostream>
#include <cmath>
using namespace std;
int ReadPositivNumber(string Message) {
	int n;
	do {
		cout << Message;
		cin >> n;
	} while (n <= 0);
	return n;
}
void ShowResult(int Array[]) {
	for (int i = 0; i <= 9;  i++)
	{
		if (Array[i] != 0)
			cout << "Digit " << i << " Frequency is " << Array[i] << " Time(s).\n";
	}
}
void PrintRepetitionNumber(int Number1,int Array[]) {
	int Number2 = 0;
	while (Number1 > 0) {
		Number2 = Number1 % 10;
		for (int i = 0; i <= 9; i++)
		{
			if (Number2 == i)
				Array[i]++;
		}	
		Number1 = Number1 / 10;
	}
	ShowResult(Array);
}
int main()
{
	int Array[10] = { 0,0,0,0,0,0,0,0,0,0 };
	PrintRepetitionNumber(ReadPositivNumber("Please enter a positive number!\t"), Array);
	return 0;
}
