/*
Exercise 05
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
void PrintReversedNumber(int Number) {
	int Number2 = 0;
	while (Number>0) {
	    Number2=Number % 10;
	    cout << Number2<< endl;
	    Number = Number/10;
}
		
}
int main()
{
	PrintReversedNumber(ReadPositivNumber("Please enter a positive number!\t"));
	return 0;
}
