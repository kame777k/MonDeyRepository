#pragma once
#include<string>
class Characters
{
private:
	int hp;

protected:
	void RecoverHp(int amount);

public:
	Characters(int initialHp);

	void ShowStatus(const std::string& name)const;

	void takeDamage(int damage);

	int GetHp()const;
};