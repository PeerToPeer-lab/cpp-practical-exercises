/*
Exercise 17
Programming Advice - Course 5
Solved in October 2024
*/

#include <iostream>
#include <string>
using namespace std;
/*string ReadPassword() {
	string Password;
	cout << "Please enter a 3-Letter Password (all capital)?\n";
	cin >> Password;
	return Password;
}*/
static void FindThePassword(string Password) {
	string word = "";
	int l = 1;
	for (int i = 65; i <=90 ; i++)
	{
		for (int j = 65; j <=90; j++)
		{
			for (int k =65; k <=90; k++)
			{
				word += (char)(i);
				word += (char)(j);
				word += (char)(k);
				cout <<"Trial[" << l<<"]:" << word << endl;
				l++;
				if (word == Password)
					break;
				word = "";
			}
			if (word == Password) {
				cout << "Password is " << Password << endl 
					<<"Found after " <<l-1 <<" trial(s)";
				break;
			}
		}
		if (word == Password)
			break;
	}
}
int main()
{
	string Password = "";
	cin >> Password;
	FindThePassword(Password);
	return 0;
}
