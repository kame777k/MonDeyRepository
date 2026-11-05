#include "Enemy.h"
#include<iostream>
#include"PlayerAction.h"
#include"EnemyAction.h"
#include<string>

using namespace std;

Enemy::Enemy(int initialHp, std::string name)
	:Characters(initialHp, name)
{

}

void Enemy::ActionDecision(const PlayerAction playeraction)
{
	if (playeraction == PlayerAction::Attack)
	{
		enemyAction = EnemyAction::Defense;
	}
	else
	{
		enemyAction = EnemyAction::Attack;
	}
}
void Enemy::DrawAction()const
{
	cout << "“G‚Ìs“®:";
	switch (enemyAction)
	{
	case EnemyAction::Attack:
		cout << "UŒ‚\n";
		break;
	case EnemyAction::Defense:
		cout << "–hŒä\n";
		break;

	}
}