/*
Exercise 49
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

int Ceil(float Number) {
	if (Number - (int)Number == 0)
		return Number;
	else {
		if (Number >= 0)
			return int(Number)+1;
		else
			return int(Number);
	}
}
int main() {
	float Number= ReadNumber("Please enter a number\t");
	cout << "\nMy Ceil result:\t" << Ceil(Number);
	cout << "\nc++ Ceil result:\t" << ceil(Number);
	return 0;
}
