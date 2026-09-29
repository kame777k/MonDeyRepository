#pragma once
#include"Player.h"
#include"CPU.h"
#include"CardManager.h"
class Turn
{
public:
	bool PlayPlayerTurn(Player* player, CardManager* cardManager);
	void PlayCpuTurn(Player* player, CPU* cpu, CardManager* cardManager);

};

