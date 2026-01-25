/*
Project: Rock Paper Scissors (Console Game)
Course: Programming Advice - Course 5
Solved in: October 2024
*/
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <conio.h>
using namespace std;

enum enRole { Stone = 1, Paper = 2, Scissors = 3 };

struct stPlayer { int id; string Name; enRole Role; };

int Random(int From, int To) {
	return rand() % (To - From + 1) + From;
}

int ReadPositivNumberLess100(string Message) {
	int n;
	do {
		cout << Message;
		cin >> n;
	} while (n <= 0 || n > 100);
	return n;
}

void Initialisation(stPlayer& Player, int id, string Name) {
	Player.id = id;
	Player.Name = Name;
}

int NumberofRounds() {

	return ReadPositivNumberLess100("How many rounds the game will be?\t");
}

void ChoiceRoleWithNumberChoice(enRole& Role, int NumberChoice) {
	switch (NumberChoice)
	{
	case 1:
		Role = enRole::Stone;
		break;
	case 2:
		Role = enRole::Paper;
		break;
	case 3:
		Role = enRole::Scissors;
		break;
	default:
		break;
	}
}

void ReadPlayersChoice(enRole& PlayerChoice, enRole& ComputerChoice) {
	int NumberChoice;
	/*do
	{*/
	cout << "Enter your choice: [Rock]:1, [Paper]:2, [Scissors]:3 ?\t";
	cin >> NumberChoice;
	//} while (NumberChoice==1 || NumberChoice==2 || NumberChoice==3);
	ChoiceRoleWithNumberChoice(PlayerChoice, NumberChoice);
	NumberChoice = Random(1, 3);
	ChoiceRoleWithNumberChoice(ComputerChoice, NumberChoice);
}

int ReturnResult(stPlayer Player1, stPlayer Player2) {
	while (Player1.Role == enRole::Stone)
	{
		switch (Player2.Role)
		{
		case enRole::Stone:
			return 0;
			break;
		case enRole::Paper:
			return Player2.id;
			break;
		case enRole::Scissors:
			return Player1.id;
			break;
		default:
			break;
		}
	}
	while (Player1.Role == enRole::Paper)
	{
		switch (Player2.Role)
		{
		case enRole::Stone:
			return Player1.id;
			break;
		case enRole::Paper:
			return 0;
			break;
		case enRole::Scissors:
			return Player2.id;
			break;
		default:
			break;
		}
	}
	while (Player1.Role == enRole::Scissors)
	{
		switch (Player2.Role)
		{
		case enRole::Stone:
			return Player2.id;
			break;
		case enRole::Paper:
			return Player1.id;
			break;
		case enRole::Scissors:
			return 0;
			break;
		default:
			break;
		}
	}
}

void ShowRole(stPlayer Player) {
	switch (Player.Role)
	{
	case 1:
		cout << "Stone";
		break;
	case 2:
		cout << "Paper";
		break;
	case 3:
		cout << "Scissors";
		break;
	default:
		break;
	}
}

void ShowResult(stPlayer Player1, stPlayer Player2, int NumberOfTimes[]) {

	cout << "\t\tYour choice:\t";
	ShowRole(Player1);
	cout << endl << "\t\tComputer choice:\t";
	ShowRole(Player2);
	cout << endl << "\t\t";
	switch (ReturnResult(Player1, Player2))
	{
	case 0:
		NumberOfTimes[0]++;

		system("color 6F");
		cout << "Draw";
		break;
	case 1:
		NumberOfTimes[1]++;
		system("color 2F");
		cout << "You are the winner";
		break;
	case 2:
		NumberOfTimes[2]++;
		cout << "\a";
		system("color 4F");
		cout << "You lost,the computer is the winner";
		break;
	default:
		break;
	}
	cout << endl << "____________________________________________________" << endl << endl;
}

void StartPlay(stPlayer Player1, stPlayer Player2) {

	int NumberOfTimes[3];
	char Char = 'Y';
	int NumberOfRounds;
	do
	{
		system("cls");
		NumberOfRounds = NumberofRounds();
		NumberOfTimes[0] = 0;
		NumberOfTimes[1] = 0;
		NumberOfTimes[2] = 0;
		for (int i = 0; i < NumberOfRounds; i++)
		{
			cout << endl << "Round [" << i + 1 << "] begins:" << endl << endl;
			ReadPlayersChoice(Player1.Role, Player2.Role);
			cout << "\n_____________________Round " << i + 1 << "_______________________\n\n";
			ShowResult(Player1, Player2, NumberOfTimes);
		}
		cout << endl << "\t\t____________________________________________________";
		cout << "\n\n\t\t\t\t+++G A M E O V E R+++";
		cout << endl << "\t\t____________________________________________________" << endl;
		cout << endl << "\t\t___________________[Game Result]____________________" << endl;
			
		cout << "\t\tGame Rounds        :\t" << NumberOfTimes[0]+NumberOfTimes[1]+NumberOfTimes[2] << endl;
		cout << "\t\tPlayer 1 won times :\t" << NumberOfTimes[1] << endl;
		cout << "\t\tcomputer won times :\t" << NumberOfTimes[2] << endl;
		cout << "\t\tDraw times         :\t" << NumberOfTimes[0] << endl;
		cout << "\t\tFinal Winner       :\t";
		if (NumberOfTimes[1] == NumberOfTimes[2])
			cout << "No Winner";
		else
			if(NumberOfTimes[1] > NumberOfTimes[2])
				cout << "Player";
			else
				cout << "Computer";
		cout << endl << "\t\t____________________________________________________" << endl << endl;
		cout << "\t\tDo you want to play again? ? Y/N?\t";
		cin >> Char;
	} while (Char == 'Y' || Char=='y');

}

int main() {
	srand((unsigned)time(NULL));

	stPlayer UserPlayer;
	stPlayer ComputerPlayer;
	Initialisation(UserPlayer, 1, "User");
	Initialisation(ComputerPlayer, 2, "Computer");
	StartPlay(UserPlayer, ComputerPlayer);
	return 0;
}
