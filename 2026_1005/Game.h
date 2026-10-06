#pragma once
#include"GameCharacters.h"
#include"Player.h"
#include"CPU.h"

class Game
{
private:
	GameCharacters gameCharacters;
	Player player;
	CPU cpu;

public:

	Game();
	void Run();

};

