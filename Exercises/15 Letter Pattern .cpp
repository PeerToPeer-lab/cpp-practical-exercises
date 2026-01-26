/*
Exercise 15
Programming Advice - Course 5
Solved in October 2024
*/

#include <iostream>
using namespace std;
int ReadPositivNumberLessThan9(string Message) {
	int n;
	do {
		cout << Message;
		cin >> n;
	} while (n <= 0 || n > 9);
	return n;
}
void PrintInveredPattern(int Number) {
	int Number2 = 1;
	for (int i = 0; i < Number; i++)
	{
		for (int j = 0; j < Number2; j++)
		{
			cout << (char)(64+ Number2);
		}
		Number2++;
		cout << endl;
	}
}
int main()
{
	PrintInveredPattern(ReadPositivNumberLessThan9("Please enter a positive number Less Than 9!\t"));
	return 0;
}
