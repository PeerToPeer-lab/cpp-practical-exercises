/*
Exercise 01
Programming Advice - Course 5
Solved in October 2024
*/
#include <iostream>
using namespace std;
void PrintTableHeader() {
	cout << "\n\n\t\t\tMultiplication Table From 1 To 10\n\n";
	for (int i = 1; i <= 10; i++)
	{
		cout << "\t" << i;
	}
	cout << "\n___________________________________________________________________________________________\n";

}
void ColumSperator(int i) {
	if (i < 10)
		cout << " |";
	else
		cout << "|";
}
void PrintMultiplicationTable() {
	PrintTableHeader();
	for (int i = 1; i <= 10; i++)
	{
		cout << " ";
		cout << i;
		ColumSperator(i);
		cout << "\t";
		for (int j = 1; j <= 10; j++)
		{
			cout << i * j << "\t";
		}
		cout << endl;

	}
}
int main()
{
	PrintMultiplicationTable();
}
