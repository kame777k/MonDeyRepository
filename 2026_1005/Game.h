#pragma once
#include"GameCharacters.h"
#include"Player.h"
#include"CPU.h"
#include"Turn.h"

class Game
{
private:

	GameCharacters gameCharacters;
	Player player;
	CPU cpu;
	Turn turn;

public:

	Game();
	void Run();

};

