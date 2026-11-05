#include "Characters.h"
#include<iostream>
#include<string>
using namespace std;

Characters::Characters(int initialHp, string name) :hp(initialHp), name(name) {};

void Characters::ShowStatus()const
{
	cout << "NAME:" << name << "\nHP:" << hp << endl;
}

void Characters::TakeDamge(int damage)
{
	hp -= damage;
}


int  Characters::GetHp()const
{
	return hp;
}