#include<iostream>
#include"Characters.h"
#include"Player.h"
#include"Enemy.h"
#include"PlayerAction.h"
#include"Config.h"
using namespace std;

namespace 
{
	int CalculationDamage(PlayerAction plaAction)
	{
		int damage = 0;
		if (plaAction != PlayerAction::Attack)
		{
			damage = Config::ENEMY_ATTACK;
			if (plaAction == PlayerAction::Defense)
			{
				damage -= Config::PLAYER_DEFENSE;
			}
		}
	
		return damage;
	}
}

int main(void)
{
	Player player(Config::HP_MAX, "player");
	Enemy enemy(Config::HP_MAX, "enemy");

	cout << "野生の敵が現れた\n";
	while (player.GetHp() > 0 && enemy.GetHp() > 0)
	{
		//ステータス表示
		player.ShowStatus();
		enemy.ShowStatus();

		//行動選択
		player.Selection();
		//行動表示
		player.DrawAction();

		enemy.ActionDecision(player.GetAction());
		enemy.DrawAction();

		player.TakeDamge(CalculationDamage(player.GetAction()));
	}

	return 0;
}