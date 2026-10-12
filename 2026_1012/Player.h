#pragma once
#include"Characters.h"
class Player:public Characters
{
public:
	Player(string name);
	void Attack() override;
};

