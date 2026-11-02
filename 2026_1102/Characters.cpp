#include "Characters.h"
#include<iostream>
#include"Config.h"
using namespace std;

Characters::Characters(int initialHp) :hp(initialHp) {};

void Characters::ShowStatus(const string& name)const
{
	cout << name << "HP:" << hp << endl;
}

void Characters::takeDamage(int damage)
{
	hp -= damage;

	if (hp < 0)
	{
		hp = 0;
	}
}

int Characters::GetHp()const
{
	return hp;
}

void Characters::RecoverHp(int amount)
{
	hp += amount;
	if (hp > Config::MAX_HP)
	{
		hp = Config::MAX_HP;
	}
}