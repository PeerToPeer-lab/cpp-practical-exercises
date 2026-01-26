/*
Exercise 16
Programming Advice - Course 5
Solved in October 2024
*/
#include <iostream>
using namespace std;
void PrintAllWords() {
	string word = "";
	for (int i = 65; i <=90 ; i++)
	{
		for (int j = 65; j <=90; j++)
		{
			for (int k =65; k <=90; k++)
			{
				word += (char)(i);
				word += (char)(j);
				word += (char)(k);
				cout <<  word << endl;
				word = "";
			}
		}
		
	}
}
int main()
{
	PrintAllWords();
	return 0;
}
