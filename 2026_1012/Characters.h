#pragma once
#include<string>
using namespace std;
class Characters
{
private:
	string name;
	
public:
	Characters(string name);

	string GetName();

	virtual void Attack();
};

