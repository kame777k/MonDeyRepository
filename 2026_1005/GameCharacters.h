#pragma once
#include"Config.h"
class GameCharacters
{
protected:
	int hp;
	int attackPower;
	int defense;
	int evasionAbility;
	
	void Init();
	void SetAbilityValus(int& attackPower, int& defense, int& evasionAbility);
public:
	GameCharacters();

	//ステータス表示
	void ShowStatus();
	//攻撃
	void Attack(GameCharacters& target);
	//回復
	void Recovery();
	//生存判定
	bool IsAlive() { return hp > Config::DEAD_HP; }
	//HP取得
	int GetHp() { return hp; }

};