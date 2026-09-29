#include "Player.h"
#include<iostream>

using namespace std;

Player::Player()
{
	total = 0;
}

void Player::AddCard(int card)
{
	total += card;
}

int Player::GetTotal()
{
	return total;
}

void Player::Draw()
{
	cout << "合計：" << total << endl;
}