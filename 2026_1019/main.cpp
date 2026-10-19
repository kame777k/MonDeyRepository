#include<iostream>
#include"Servant.h"
#include"Archer.h"
#include"Rider.h"
#include"Saber.h"
using namespace std;

int main(void)
{
	Archer archer;
	Rider rider;
	Saber saber;

	Servant* servant[] = {&saber,&archer,&rider};

	for (int i = 0; i < 3; i++)
	{
		servant[i]->ShowProfile();
		servant[i]->Attack();
	}

	return 0;
}