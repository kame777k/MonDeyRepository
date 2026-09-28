#pragma once
#include<vector>
class Cpu
{
public:
	Cpu();

	void Total_Score_Judgment()const;
	bool Input_Jugment();
	void AddCrad();
private:
	std::vector<int>card;
	int total;
	int* pPlayer_Total_num;
};

