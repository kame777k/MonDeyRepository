#pragma once
class GameCharacters
{
protected:
	int hp;
	int attackPower;
	int defense;
	int evasionAbility;

	void Init();
	void SetAbilityValus();
public:
	void ShowStatus();

	GameCharacters();
};