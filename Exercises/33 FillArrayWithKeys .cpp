/*
Exercise 33
Programming Advice - Course 5
Solved in October 2024
*/

#include <iostream>
#include <cstdlib>
using namespace std;
enum enCharType { SmallLetter = 1, CapitalLetter = 2, Digit = 3, SpecialCharcter = 4 };
int ReadPositivNumber(string Message) {
	int n;
	do {
		cout << Message;
		cin >> n;
	} while (n <= 0);
	return n;
}
int Random(int From, int To) {
	return rand() % (To - From + 1) + From;
}
char GetRandomCharacter(enCharType chartype) {
	switch (chartype)
	{
	case SpecialCharcter:
		return (char)Random(33, 47);
		break;
	case Digit:
		return (char)Random(48, 57);
		break;
	case CapitalLetter:
		return (char)Random(65, 90);
		break;
	case SmallLetter:
		return (char)Random(97, 122);
		break;
	default:
		break;
	}
}
string GenerateWord(enCharType CharType, short length) {
	string Word = "";
	for (int i = 0; i < length; i++)
	{
		Word += GetRandomCharacter(CharType);
	}
	return Word;

}
string GenerateKey() {
	string Key = "";
	Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key += GenerateWord(enCharType::CapitalLetter, 4);
	return Key;
}

void FillArrayWithKeys(string Array[], int ArrayLength) {
	for (int i = 0; i < ArrayLength; ++i) {
		Array[i] = GenerateKey();
	}
}

void PrintArray(string Array[], int ArrayLength) {
	for (int i = 0; i < ArrayLength; i++)
	{
		cout << "Array[" << i << "]: " << Array[i] << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));
	string Array[100];
	int ArrayLength = ReadPositivNumber("Pleas enter a number\t");
	FillArrayWithKeys(Array, ArrayLength);
	PrintArray(Array, ArrayLength);
}
