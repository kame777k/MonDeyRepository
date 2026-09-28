#pragma once
#include"Player.h"
#include"Cpu.h"
#include"Config.h"
#include"CardManager.h"
class Game
{
public:
	Game();

	void Run();
	void Draw();
	void Judgment();
private:
	bool PlayerWinFlag;
};
