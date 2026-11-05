#pragma once
#include<string>
#include"Characters.h"
#include"EnemyAction.h"
#include"PlayerAction.h"
#include"EnemyAction.h"

class Enemy:public Characters
{
private:
	EnemyAction enemyAction = EnemyAction::Attack;
	
public:
	Enemy(int initialHp, std::string name);
	void ActionDecision(const PlayerAction playeraction);
	void DrawAction() const override;
	EnemyAction GetAction()const { return enemyAction; }
};

