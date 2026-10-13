#include "BattleManager.h"
#include<iostream>
	

void BattleManager::SrartBattle(Characters* character)
{
	cout << character->GetName() << endl;
	character->Attack();
}

