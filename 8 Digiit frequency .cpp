/*
Exercise 08
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
int ReadPositivNumberLessThan9(string Message) {
	int n;
	do {
		cout << Message;
		cin >> n;
	} while (n <= 0 || n > 9);
	return n;
}
int PrintRepetitionNumber(int Number1, int Number2) {
	int Number3 = 0;
	int Number4 = 0;
	while (Number1 > 0) {
		Number3 = Number1 % 10;
		if (Number2 == Number3)
			Number4++;
		Number1 = Number1 / 10;
	}
	cout << "Digit "<< Number2 <<" Frequency is " << Number4 << " times";
	return Number4;
}
int main()
{
	cout << PrintRepetitionNumber(ReadPositivNumber("Please enter a positive number!\t")
		,ReadPositivNumberLessThan9("Please enter a positive number Less Than 9!\t" ));
	return 0;
}
