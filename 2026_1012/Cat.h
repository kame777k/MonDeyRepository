#pragma once
#include "Animal.h"
class Cat:public Animal
{
public:
	Cat(string name);
	void Speak() override;
};

