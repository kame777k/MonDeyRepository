#pragma once
class CPU
{
public:
	CPU();
	void AddCard(int card);
	int GetTotal();
	void Draw();

private:
	int total;
};

