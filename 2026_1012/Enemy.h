#pragma once
#include"Characters.h"
class Enemy:public Characters
{
public:
	Enemy(string name);
	void Attack()override;
};

