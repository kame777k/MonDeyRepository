#include "CPU.h"
#include"Config.h"

#include <iostream>
#include<cstdlib>

using namespace std;

CPU::CPU() :GameCharacters() {};

void CPU::Action(GameCharacters& target)
{
	cout << "\n「CPUのターン」\n";

	Attack(target);
}
