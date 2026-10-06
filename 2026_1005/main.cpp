#include<iostream>
#include"Game.h"
using namespace std;

int main(void)
{
	//—”‰Šú‰»
	srand(static_cast<unsigned int>(time(nullptr)));

	Game game;
	game.Run();
	return 0;
}
