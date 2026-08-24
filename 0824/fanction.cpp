#include<iostream>
#include"header.h"

using namespace std;

void Game()
{
	int numbers[5] = { 10,20,30,40,50 };
	int* pNum = numbers;
	int input;

	Draw(pNum);

	Input(input);

	Times(pNum,input);

	Draw(pNum);
}

void Input(int &input)
{
	cout << "“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n";
	cin >> input;
}

void Times(int* pNum ,int input)
{
	for (int i = 0; i < NUM; i++)
	{
		*(pNum + i) *= input;
	}
}

void Draw(int* pNum)
{
	for (int i = 0; i < NUM; i++)
	{
		cout << *(pNum + i) << endl;
	}
}