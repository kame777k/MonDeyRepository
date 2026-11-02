#include<iostream>
using namespace std;

namespace player
{
	void showStatus()
	{
		cout << "プレイヤーの名前：harry" << endl;
	}
}

namespace enemy
{
	void showStatus()
	{
		cout << "敵の名前：ron" << endl;
	}
}

int main(void)
{
	player::showStatus();
	enemy::showStatus();

	return 0;
}