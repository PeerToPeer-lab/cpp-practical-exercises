/*
Exercise 48
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
float GetFractionPart(float Number) {
	return Number - int(Number);
}

int Floor(float Number) {
	if (Number >= 0)
		return int(Number);
	else
		return int(Number)-1;
}
int main() {
	float Number= ReadNumber("Please enter a number\t");
	cout << "\nMy Floor result:\t" << Floor(Number);
	cout << "\nc++ Floor result:\t" << floor(Number);
	return 0;
}
