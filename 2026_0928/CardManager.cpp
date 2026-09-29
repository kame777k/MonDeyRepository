#include "CardManager.h"
#include "Config.h"
#include<ctime>
#include<cstdlib>

CardManager::CardManager()
{
	cardCount = Config::CARD_TOTAL;
}

void CardManager::CreateCards()
{
	int index = 0;

	for (int num = 0; num < Config::CARD_MAX; num++)
	{
		
		for (int i = 0; i < Config::CARD_TYPE; i++)
		{
			cards[index] = num;
			index++;
		}
	}
}

void CardManager::ShuffleCards()
{
	//シャフル
	for (int j = 0; j < Config::CARD_TOTAL; j++)
	{
		int randomIndex = j + rand() % (Config::CARD_TOTAL - j);
		int temp = cards[j];
		cards[j] = cards[randomIndex];
		cards[randomIndex] = temp;
	}
}

int CardManager::DrawCard()
{
	int card = cards[0];

	for (int i = 0; i < cardCount - 1; i++)
	{
		cards[i] = cards[i + 1];
	}

	cardCount--;

	return card;
}

int CardManager::GetCardCount()
{
	return cardCount;
}