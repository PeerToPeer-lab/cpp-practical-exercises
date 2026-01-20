/*
Exercise 18
Programming Advice - Course 5
Solved in October 2024
*/

#include <iostream>
#include <string>
using namespace std;
string ReadText() {
	string Text;
	cout << "Please enter a text?\t";
	cin >> Text;
	return Text;
}
short ReadKey() {
	short Key;
	cout << "Please enter a key?\t";
	cin >> Key;
	return Key;
}
string Encryption(string Text,short key) {
	string TextEncryption = "";
	for (int i = 0; i < Text.length(); i++)
	{
		TextEncryption += static_cast <char>(static_cast <int> (Text[i]) + key);
	}
	return TextEncryption;
}
string Decryption(string Text, short key) {
	string TextDecryption = "";
	for (int i = 0; i < Text.length(); i++)
	{
		TextDecryption += static_cast <char>(static_cast <int> (Text[i]) - key);
	}
	return TextDecryption;
}
void ShowResult(string Text, short key) {
	cout << "Text befor Encryption " << Text << endl;
	cout << "Text after Encryption " << Encryption(Text, key) << endl;
	cout << "Text after Decryption " << Decryption(Encryption(Text, key), key) << endl;
}
int main()
{
	ShowResult(ReadText(),ReadKey());
	return 0;
}
