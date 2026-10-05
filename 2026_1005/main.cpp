#include<iostream>
#include<ctime>
#include<cstdlib>
#include"Game.h"
using namespace std;

int main(void)
{
	srand(static_cast<unsigned int>(time(nullptr)));

	Game game;
	game.Run();

	return 0;
}