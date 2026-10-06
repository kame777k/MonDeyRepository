#pragma once
#include"GameCharacters.h"
class CPU:public GameCharacters
{
public:
	CPU();

	void Action(GameCharacters& target);
};

