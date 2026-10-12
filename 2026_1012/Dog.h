#pragma once
#include"Animal.h"
class Dog:public Animal
{
public:
	Dog(string name);
	void Speak() override;//オーバーライド：再定義するよ
};

