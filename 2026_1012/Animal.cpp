#include "Animal.h"
#include<iostream>

using namespace std;

Animal::Animal(string name)
{
	//thisポインタ
	//自分自身
	this->name = name;
}

string Animal::GetName()
{
	return name;
}

void Animal::Speak()
{
	cout << "動物の鳴き声\n";
}