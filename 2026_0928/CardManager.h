#pragma once
#include<vector>
class CardManager
{
public:
	CardManager();
	//カードを作成
	void CardteCard();
	//カードをシャッフル
	void ShuffleCard();

private:
	std::vector<int>card;
};

