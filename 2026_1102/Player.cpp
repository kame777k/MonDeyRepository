#include "Player.h"
#include<iostream>
using namespace std;

void Selection(int& selection)
{
	while (true)
	{
		cin >> selection;
		if (selection >= 0 && selection < 3)
		{
			break;
		}
		cout << "•s³‚È“ü—Í‚Å‚·BÄ“x“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n";
	}
}