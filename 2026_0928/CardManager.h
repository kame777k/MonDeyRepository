#pragma once
#include"Config.h"
class CardManager
{
public:
	CardManager();
	void CreateCards();
	void ShuffleCards();
	int DrawCard();
	int GetCardCount();

public:
	int cards[Config::CARD_TOTAL];
	int cardCount;
};

