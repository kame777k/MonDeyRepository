#pragma once
#include"Player.h"
#include"CPU.h"
class Turn
{
private:
	Player* player;
	CPU* cpu;
public:
	Turn(Player* p, CPU* c);

	//ƒ^[ƒ“‚ÌÀs
	void Execute();
};

