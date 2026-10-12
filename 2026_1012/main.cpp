#include<iostream>
#include"BattleManager.h"
#include"Player.h"
#include"Enemy.h"
#include"Boss.h"
using namespace std;

int main(void)
{
	string playerName;
	cout << "プレイヤーの名前を入力してください\n";
	cin >> playerName;

	Player player(playerName);
	Enemy enemy("犬");
	Boss boss("???????");
	BattleManager batteleManager;

	batteleManager.SrartBattle(&player,&enemy,&boss);

	return 0;
}