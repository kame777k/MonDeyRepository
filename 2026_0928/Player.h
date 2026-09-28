#pragma once
#include<vector>
class Player
{
public:
	Player();

	void Total_Score_Judgment()const;
	bool Input();
	void AddCrad();
	void Draw();
private:
	std::vector<int>card;
	int total;
};

