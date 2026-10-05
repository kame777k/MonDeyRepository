#include "Player.h"
#include<iostream>
#include"Config.h"

using namespace std;

Player::Player()
{
	input = 0;
}

void Player::Input()
{
	while (true)
	{
		cin >> input;
		if (input == Config::PLAYER_ATTACK || input == Config::PLAYER_RECOVERY)
		{
			break;
		}
	}
}