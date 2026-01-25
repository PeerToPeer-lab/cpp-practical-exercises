/*
Exercise 04
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
bool CheckPerfectNumber(int number) {
	int sum=0;
	for (int i = 1; i <= number/2; i++)
	{
		if (number % i == 0)
			sum += i;
	}
	if (sum == number)
		return true;
	else
		return false;
}
void ShowPerfectNumbers(int Number) {
	cout << "\n";
	for (int i = 1; i <= Number; i++)
	{
		if (CheckPerfectNumber(i))
			cout << i << endl;
	}
}
int main()
{
	ShowPerfectNumbers(ReadPositivNumber("Please enter a positive number!\t"));
	return 0;
}
