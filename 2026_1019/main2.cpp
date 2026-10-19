#include<iostream>
#include"Madoka.h"
#include"Homura.h"
using namespace std;

int main(void)
{
	constexpr int MAGICALGIRLS_NUM = 2;
	Madoka madoka;
	Homura homura;
	MagicalGirl* magicalGirl[MAGICALGIRLS_NUM] = {&madoka,&homura};

	for (int i = 0; i < MAGICALGIRLS_NUM; i++)
	{
		magicalGirl[i]->ShowProfile();
		magicalGirl[i]->Fight();
	}
	return 0;
}