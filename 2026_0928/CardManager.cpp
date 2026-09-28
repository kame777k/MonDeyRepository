#include "CardManager.h"
#include"Config.h"
#include<iostream>
#include<vector>

CardManager::CardManager()
{
	card.clear();
}

void CardManager::CardteCard()
{
	for (size_t card_max = 0; card_max < Config::CARD_MAX; card_max++)
	{
		for (size_t type = 0; type < Config::CARD_TYPE; type++)
		{
			card.emplace_back(card_max + 1);
		}
	}
}

void CardManager::ShuffleCard()
{
	int index1;
	int index2;
	for (size_t card_toatal = 0; card_toatal < Config::CARD_TOTAL; card_toatal++)
	{
		index1 = rand() % Config::CARD_TOTAL;
		index2 = rand() % Config::CARD_TOTAL;
		int index3 = card[index1];
		card[index1] = card[index2];
		card[index2] = index3;
	}
}