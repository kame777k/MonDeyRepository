#include "BattleManager.h"
#include<iostream>
	

void BattleManager::SrartBattle(Characters* player, Characters* enemy, Characters* boss)
{
	cout << player->GetName() << endl;
	player->Attack();

	cout << enemy->GetName() << endl;
	enemy->Attack();

	cout << boss->GetName() << endl;
	boss->Attack();

}

