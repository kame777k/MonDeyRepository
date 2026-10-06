#include "Turn.h"
#include<iostream>
using namespace std;

Turn::Turn(Player* p, CPU* c)
{
	player = p;
	cpu = c;
}

void Turn::Execute()
{
	cout << "PLAYER:STATUS\n";
	player->ShowStatus();
	player->Action(*cpu);

	if (!cpu->IsAlive())
	{
		return;
	}
	cpu->Action(*player);

	if (!player->IsAlive())
	{
		return;
	}
}