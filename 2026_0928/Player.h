#pragma once
class Player
{
public:
	Player();

	void AddCard(int card0);
	int GetTotal();
	void Draw();

private:
	int total;
};

