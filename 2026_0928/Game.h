#pragma once
#include"Player.h"
#include"CPU.h"
#include "Turn.h"
#include"CardManager.h"
class Game
{
public:
	Game();
	void Run();

private:
	CardManager cardManager;
	Player player;
	CPU cpu;
	Turn turn;



	void DealInitialCards();
	void Draw();

};

