/*
Exercise 10
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
	int Number1 = 0;
	int i = 0;
	while (Number > 0) {
		Number1 = Number;
		i = 0;
		while (Number1 / 10 != 0)
		{
			Number1 /= 10;
			i++;
		} 
		cout << Number1 << endl;
		Number -= Number1*pow(10,i);
	}

}
int main()
{
	PrintReversedNumber(ReadPositivNumber("Please enter a positive number!\t"));
	return 0;
}
