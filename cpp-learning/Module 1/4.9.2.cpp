/*
Pointer and Reference exercies
Write a dice rolling function that returns two random numbers between the range [1.6]. Implement the funciton twice. once using references, once using pointers
*/

#include <iostream>
#include <time.h>
using namespace std;

#define DICEROLL rand() % 6 + 1;

void RDice(int& die1, int& die2)
{
	die1 = DICEROLL
	die2 = DICEROLL
}

void PDice(int* die1, int* die2)
{
	*die1 = DICEROLL
	*die2 = DICEROLL
}

int main492()
{
	int die1, die2;
	srand(time(0));
	cout << "PDice: " << endl;
	for (int i = 0; i < 20; i++)
	{
		PDice(&die1, &die2);
		cout << "Die1: " << die1 << ", Die2: " << die2 << endl;
	}
	cout << "RDice: " << endl;
	for (int i = 0; i < 20; i++)
	{
		RDice(die1, die2);
		cout << "Die1: " << die1 << ", Die2: " << die2 << endl;
	}
	return 0;
}