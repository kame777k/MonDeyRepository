#pragma once
#include"Characters.h"
class Boss:public Characters
{
public:
	Boss(string name);
	void Attack() override;
};

