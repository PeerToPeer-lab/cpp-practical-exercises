/*
Exercise 20
Programming Advice - Course 5
Solved in October 2024
*/
#include <iostream>
#include <cstdlib>
using namespace std;
enum enCharacterType{SmallLetter=1,CapitalLetter=2,Digit=3,SpecialCharcter=4};
int Random(int From, int To) {
	return rand() % (To - From + 1) + From;
}
char GetRandomCharacter(enCharacterType charactertype) {
	switch (charactertype)
	{
	case SpecialCharcter:
		return (char)Random(33, 47);
		break;
	case Digit:
		return (char)Random(48,57);
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

int main()
{
	srand((unsigned)time(NULL));
	
	cout << GetRandomCharacter(enCharacterType::CapitalLetter) << endl;
	cout << GetRandomCharacter(enCharacterType::SmallLetter) << endl;
	cout << GetRandomCharacter(enCharacterType::Digit) << endl;
	cout << GetRandomCharacter(enCharacterType::SpecialCharcter) << endl;

}
