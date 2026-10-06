#include "Turn.h"

Turn::Turn(Player* p, CPU* c)
{
	player = p;
	cpu = c;
}

void Turn::Execute()
{
	player->Action(*cpu);

	if (!cpu->IsAlive())
	{
		return;
	}

	cpu->Action(*player);
}