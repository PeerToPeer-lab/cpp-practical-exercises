/*
Exercise 06
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
int ReturnSumNumbersOfNumber(int Number) {
	int Number2 = 0;
	int sum = 0;
	while (Number>0) {
		Number2=Number % 10;
		sum += Number2;
		Number = Number/10;
	}
	return sum;
		
}
int main()
{
	cout << ReturnSumNumbersOfNumber(ReadPositivNumber("Please enter a positive number!\t"));
	return 0;
}
