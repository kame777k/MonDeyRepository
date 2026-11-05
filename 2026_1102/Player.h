#pragma once
#include"Characters.h"
#include"PlayerAction.h"
#include<string>

class Player:public Characters
{
private:
	PlayerAction action = PlayerAction::Attack;
public:
	Player(int initialHp, std::string name);
	void Selection();
	void DrawAction() const override;
	void Recovery(int &hp);
	PlayerAction GetAction()const;
};

