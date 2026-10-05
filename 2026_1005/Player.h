#pragma once
#include"GameCharacters.h"
class Player : public GameCharacters
{
public:
	Player();

private:

	int input;

	void Input();
};

