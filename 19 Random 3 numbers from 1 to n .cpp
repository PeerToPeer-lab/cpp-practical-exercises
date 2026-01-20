/*
Exercise 19
Programming Advice - Course 5
Solved in October 2024
*/

#include <iostream>
#include <cstdlib>
using namespace std;
int Random(int From,int To) {
	return rand() % (To - From + 1) + From;
}
int main()
{
	srand((unsigned)time(NULL));
	cout << Random(1,10) << endl;
	cout << Random(1, 10) << endl;
	cout << Random(1, 10) << endl;
	return 0;
}
