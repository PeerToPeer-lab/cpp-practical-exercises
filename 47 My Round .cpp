/*
Exercise 47
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

int Round(float Number) {
	int intPart = int(Number);
	float FractionPart =GetFractionPart(Number);
	if (fabs(FractionPart) >= .5) {
		if(Number>0)
			return ++intPart;
		else
			return --intPart;
	}
	else {
			return intPart;
	}
		
	
}
int main() {
	float Number= ReadNumber("Please enter a number\t");
	cout << "\nMy Round result:\t" << Round(Number);
	cout << "\nc++ Round result:\t" << round(Number);
	return 0;
}
