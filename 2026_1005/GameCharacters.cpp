#include "GameCharacters.h"
#include "Config.h"

#include <iostream>
#include <cstdlib>

using namespace std;

GameCharacters::GameCharacters()
{
	hp = Config::MAX_HP;

	attackPower = rand() % (Config::MAX_STATUS - Config::MIN_STATUS + 1) + Config::MIN_STATUS;
	defense = rand() % (Config::MAX_STATUS - Config::MIN_STATUS + 1) + Config::MIN_STATUS;
	evasionAbility = rand() % (Config::MAX_STATUS - Config::MIN_STATUS + 1) + Config::MIN_STATUS;
}


void GameCharacters::ShowStatus()
{
	cout << "HP :" << hp << endl;
	cout << "攻撃力 :" << attackPower << endl;
	cout << "防御力 :" << defense << endl;
	cout << "回復力 :" << evasionAbility << endl;
}

void GameCharacters::Attack(GameCharacters& target)
{
	//ランダムな攻撃値
	int randomValue = rand() % (Config::MAX_RANDOM_VALUE - Config::MIN_RANDOM_VALUE + 1) + Config::MIN_RANDOM_VALUE;
	int attackValue = attackPower + randomValue;

	cout << "攻撃値は" << attackValue << endl;

	//回避判定
	if (attackValue <= target.evasionAbility)
	{
		cout << "攻撃を回避しました。" << endl;
		cout << "ダメージは0です" << endl;
		return;
	}
	//ダメージ計算
	int damege = attackValue - target.defense;

	if (damege < 0)
	{
		damege = 0;
	}

	target.hp -= damege;

	cout << "攻撃成功！" << "ダメージ：" << damege << "点です" << endl;

	//生存判定
	if (target.hp < Config::DEAD_HP)
	{
		target.hp = 0;
	}
}

void GameCharacters::Recovery()
{
	int randomvalue = rand() % (Config::MAX_STATUS - Config::MIN_STATUS + 1) + Config::MIN_STATUS;
	hp += randomvalue;

	if (hp > Config::MAX_HP)
	{
		hp = Config::MAX_HP;
	}
	cout << "HPを" << randomvalue << "回復しました。" << "現在のHP :" << hp << endl;
}

