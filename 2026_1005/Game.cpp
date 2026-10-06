#include "Game.h"
#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

Game::Game()
	:turn(&player,&cpu)
{}

void Game::Run()
{
	cout << "======================GAME START======================\n";
	while (player.IsAlive()&&cpu.IsAlive())
	{
		turn.Execute();
	}
	if (!player.IsAlive())
	{
		cout << "–Ú‚Ì‘O‚ª^‚ÁˆÃ‚É‚È‚Á‚½....\n";
	}
	else
	{
		cout << "PLAYER WIN!\n";
	}
}