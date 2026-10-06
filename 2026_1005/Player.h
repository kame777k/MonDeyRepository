#pragma once
#include"GameCharacters.h"
class Player : public GameCharacters
{
public:
	Player();

	//プレイヤーの行動選択
	void Action(GameCharacters& targer);


};

