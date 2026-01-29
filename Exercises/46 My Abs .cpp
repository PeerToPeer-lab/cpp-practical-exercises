/*
Exercise 46
Programming Advice - Course 5
Solved in October 2024
*/

#include <iostream>
#include <cstdlib>
using namespace std;
int ReadNumber(string Message) {
	int n;
	cout << Message;
	cin >> n;
	return n;
}
int Abs(int Number) {
	if (Number < 0)
		Number *= -1;
	return Number;
}
int main() {
	int Number= ReadNumber("Please enter a number\t");
	cout << "\nMy abs result:\t" << abs(Number);
	cout << "\nc++ abs result:\t" << Abs(Number);
	return 0;
}
