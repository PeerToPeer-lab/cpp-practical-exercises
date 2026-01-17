/*
Exercise 01
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
	} while (n <=0 );
	return n;
}
bool CheckPrime(int number) {
	if (number == 1 || number == 2)
		return true;

	for (int i = 2; i <= sqrt(number); i++)
	{
		if (number % i == 0)
			return false;
	}
	return true;
}
void ShowPrimeNumbers(int Number) {
	cout << "\n";
	cout << "The prime number from 1 to " << Number << " are:\n";
	for (int j = 1; j <= Number; j++)
	{
		if (CheckPrime(j))
			cout << j << endl;
	}
}
int main()
{
	ShowPrimeNumbers(ReadPositivNumber("Please enter a positive number!\t"));
}
