#pragma once
#include<string>
class Characters
{
private:
	std::string name;
	int hp;
	
public:

	Characters(int initialHp, std::string name);
	~Characters() = default;
	void ShowStatus()const;
	virtual void DrawAction()const = 0;
	void TakeDamge(int damage);
	int GetHp()const;
};

