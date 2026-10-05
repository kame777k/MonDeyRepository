#include "GameCharacters.h"
#include<iostream>
#include<ctime>
#include<cstdlib>
#include"Config.h"
using namespace std;

void GameCharacters::Init()
{
	hp = Config::MAX_HP;
	attackPower = 0;
	defense = 0;
	evasionAbility = 0;
}

void GameCharacters::SetAbilityValus()
{
	attackPower = rand() % Config::MAX_RAND_NUM + Config::MIN_RAND_NUM;
	defense = rand() % Config::MAX_RAND_NUM + Config::MIN_RAND_NUM;
	evasionAbility = rand() % Config::MAX_RAND_NUM + Config::MIN_RAND_NUM;
}

void GameCharacters::ShowStatus()
{
	cout << "Œ»Ý‚ÌHPF" << hp << endl;
}