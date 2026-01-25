/*
Project: Math Quiz (Console Game)
Course: Programming Advice - Course 5
Description:
- User selects number of questions
- Chooses difficulty: Easy, Medium, Hard
- Chooses operation: +, -, *, /
- Program generates random questions
- Tracks attempts, correct and incorrect answers
- Shows statistics at the end
Date: October 2024
*/
#include<iostream>
#include<cstdlib>
using namespace std;

enum enLevel { Easy = 1, Med = 2, Hard = 3 };

enum enOperationType { Add = 1, Sub = 2, Mul = 3, Div = 4 };

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

short HowManyQuestion() {
	short Questions;
	do
	{
		cout << "How many questions do you want?\t";
		cin >> Questions;
	} while (Questions < 0);
	return Questions;
}

short EnterLevel() {
	short Level;
	do
	{
		cout << "Enter question level [1] Easy.[2] Med.[3] Hard.[4] Mix?\t";
		cin >> Level;
	} while (Level < 1 || Level>4);
	return Level;
}

enLevel ChooseLevel(short Level) {
	if (Level == 4)
		Level = RandomNumber(1, 3);
	return enLevel(Level);
}

short EnterOperationType() {
	short OperationType;
	do
	{
		cout << "Enter operation type [1] Add.[2] Sub.[3] Mul.[4] Div.[5] Mix?\t";
		cin >> OperationType;
	} while (OperationType < 1 || OperationType>5);
	return OperationType;
}

enOperationType ChooseOperationType(short OperationType) {
	if (OperationType == 5)
		OperationType = RandomNumber(1, 4);
	return enOperationType(OperationType);
}

bool Question(enOperationType Operation, enLevel Level,int& Result) {
	int Number1 = 0;
	int Number2 = 0;
	switch (Level)
	{
	case Easy:
		Number1 = RandomNumber(1, 10);
		Number2 = RandomNumber(1, 10);
		break;
	case Med:
		Number1 = RandomNumber(11, 50);
		Number2 = RandomNumber(11, 50);
		break;
	case Hard:
		Number1 = RandomNumber(51, 100);
		Number2 = RandomNumber(51, 100);
		break;
	default:
		break;
	}
	cout << Number1 << endl << Number2;
	switch (Operation)
	{
	case Add:
		cout << "  +\n______________\n";
		cin >> Result;
		if (Number1 + Number2 == Result)
			return true;
		else
			Result = Number1 + Number2;
		break;
	case Sub:
		cout << "  -\n______________\n";
		cin >> Result;
		if (Number1 - Number2 == Result)
			return true;
		else
			Result = Number1 - Number2;
		break;
	case Mul:
		cout << "  *\n______________\n";
		cin >> Result;
		if (Number1 * Number2 == Result)
			return true;
		else
			Result = Number1 * Number2;
		break;
	case Div:
		cout << "  /\n______________\n";
		cin >> Result;
		if (Number1 / Number2 == Result)
			return true;
		else
			Result = Number1 / Number2;
		break;
	default:
		break;
	}
	return false;
}

void OperationResult(bool boolResult,int Result
	, short& NumberOfRightAnswer,short& NumberOfWrongAnswer) {
	if (boolResult) {
		system("color 2F");
		cout << "Right Answer:-)" << endl;
		NumberOfRightAnswer++;
	}
	else {
		cout << "\a";
		system("color 4F");
		cout << "Wrong Answer:-(" << endl;
		cout << "The right answer is: " << Result << endl;
		NumberOfWrongAnswer++;
	}
		
}

void ResetScreen()
{
	system("cls");
	system("color 0F");
}

void FinalResult(short NumberOfQuestions, enLevel Level, enOperationType OperationType
	, short& NumberOfRightAnswer, short& NumberOfWrongAnswer) {

	cout << endl <<"_____________________________";
	cout << "\n\n  Final result is ";
	if (NumberOfRightAnswer> NumberOfWrongAnswer)
		cout <<"PASS :-)";
	else
		cout << "Fail :-(";
	cout << endl << "_____________________________" << endl << endl;
	cout << "Number of question:" << NumberOfQuestions << endl;
	cout << "Question level    :" << Level << endl;
	cout << "Operation type    :" << OperationType << endl;
	cout << "Number of right answer:" << NumberOfRightAnswer << endl;
	cout << "Number of wrong answer:" << NumberOfWrongAnswer << endl;
	cout << "_____________________________" << endl;
}

void StartGame() {
	
	char PlayAgain = 'Y';
	do
	{
		ResetScreen();
		short NumberOfQuestions = HowManyQuestion();
	    short NumberOfRightAnswer = 0;
	    short NumberOfWrongAnswer = 0;
		enLevel Level = ChooseLevel(EnterLevel());
		enOperationType OperationType = ChooseOperationType(EnterOperationType());
	    int Result = 0;
		for (short i = 0; i < NumberOfQuestions; i++)
		{
			cout << endl << "Question [" << i + 1 << "/" 
				<< NumberOfQuestions << "]" << endl << endl;
			OperationResult(Question(OperationType, Level, Result)
				, Result, NumberOfRightAnswer, NumberOfWrongAnswer);
		}
		FinalResult(NumberOfQuestions,Level, OperationType
			,NumberOfRightAnswer,NumberOfWrongAnswer);
		cout << endl << "Do you want to play again? Y/N? ";
		cin >> PlayAgain;

	} while (PlayAgain == 'Y' || PlayAgain == 'y');
	
	
	
}


int main()
{
	StartGame();
	return 0;
}
