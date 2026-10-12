#include "Characters.h"
#include<iostream>
using namespace std;

Characters::Characters(string name)
{
	this->name = name;
}

string Characters::GetName()
{
	return name;
}

void Characters::Attack()
{
	cout << "UŒ‚‚µ‚½I" << endl;
}