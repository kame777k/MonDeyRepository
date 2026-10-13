#include<iostream>
#include"BattleManager.h"
#include"Player.h"
#include"Enemy.h"
#include"Boss.h"
using namespace std;

int main(void)
{
	Player player("オレンジ");
	Enemy enemy("スイカ");
	Boss boss("ブドウ");
	BattleManager battleMane;

	battleMane.SrartBattle(&player);
	battleMane.SrartBattle(&enemy);
	battleMane.SrartBattle(&boss);

	return 0;
}