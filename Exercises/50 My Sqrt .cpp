/*
Exercise 50
Programming Advice - Course 5
Solved in October 2024
*/

#include <iostream>
#include <cmath>

using namespace std;
float ReadNumber(string Message) {
	float f;
	cout << Message;
	cin >> f;
	return f;
}

float MySqrt(float Number) {
	float sqr = 0;
	do {
		sqr++;
	} while (sqr * sqr <= Number);
	sqr--;
	do {
		sqr +=0.000001 ;
	} while (sqr * sqr <= Number);
	return sqr;
}
int main() {
	float Number= ReadNumber("Please enter a number\t");
	cout << "\nMy Sqrt result:\t" << MySqrt(Number);
	cout << "\nc++ Sqrt result:\t" << sqrt(Number);
	return 0;
}
