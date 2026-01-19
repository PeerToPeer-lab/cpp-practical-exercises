/*
Exercise 11
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
int ReturnReveresNumber(int Number) {
	int Number2 = 0;
	int sum = 0;
	while (Number > 0) {
		Number2 = Number % 10;
		Number = Number / 10;
		sum = sum * 10 + Number2;
	}
	return sum;

}
bool IsPalindromeOrno(int Number) {
	return Number == ReturnReveresNumber(Number);
}
void ShowPalindromeOrno(bool Number) {
	if (Number)
		cout << "Yes,It's a Palindrome";
	else
		cout << "No,It'snt a Palindrome";
}
int main()
{
	ShowPalindromeOrno(IsPalindromeOrno(ReadPositivNumber("Please enter a positive number!\t")));
	return 0;
}
