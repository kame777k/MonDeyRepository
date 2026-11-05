#include "Player.h"
#include "Config.h"
#include<iostream>

using namespace std;

Player::Player(int initialHp, std::string name)
	: Characters(initialHp, name)
{
}

void Player::Recovery(int &hp)
{
	hp += Config::PLAYER_RECOVERY;
	if (hp > Config::HP_MAX)
	{
		hp = Config::HP_MAX;
	}
}

void Player::Selection()
{
	int input;
	cout << "行動を選択してください。\n0 攻撃\n1　防御\n2　回復\n";
	while (true)
	{
		cin >> input;
		if (Config::INPUT_MIN <= input && Config::INPUT_MAX > input)
		{
			action = static_cast<PlayerAction>(input);
			break;
		}
		cout << "入力に誤りがあります\n";
	}
}

void Player::DrawAction()const
{
	cout << "プレイヤーの行動：";
	switch (action)
	{
	case PlayerAction::Attack:
		cout << "攻撃\n";
		break;
	case PlayerAction::Defense:
		cout << "防御\n";
		break;
	case PlayerAction::Recovery:
		cout << "回復\n";

		break;
	}
}

PlayerAction Player::GetAction()const
{
	return action;
}