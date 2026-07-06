#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260706_HeaderMain2_hagiwara.h"

void Game()
{
	int player;
	int cpu;
	int playerlevel = 1;
	int playerexp = 0;
	bool playerwin = false;
	cout << "CPUとじゃんけんをします。" << endl;

	//ゲームループ
	while (true)
	{
		cout << "ぐー：0 ちょき：1 ぱー：2" << endl;
		//入力
		Input(player, ConstNumber::MAX, ConstNumber::MIN);
		CPUInput(cpu, ConstNumber::CPUHAND_MAX);
		//描画
		Draw(playerlevel, playerexp);
		cout << "あなたの手:";
		HandDraw(player);
		cout << "CPUの手:";
		HandDraw(cpu);
		//判定
		Judge(player, cpu,playerwin);
		if (!playerwin)
		{
			DrawLevel(playerlevel, playerexp);
		}

	}
	

}

void Input(int& input, int max, int min)
{
	while (true)
	{
		cin >> input;
		if (input < min || input > max)
		{
			cout << "入力が誤っています。" << endl;
		}
		else
		{
			break;
		}
	}
}

void CPUInput(int& cpu,int max)
{
	cpu = rand() % max;
}

void HandDraw(int hand)
{
	switch (hand)
	{
	case rook:
		cout << "ぐー" << endl;
		break;
	case scissors:
		cout << "ちょき" << endl;
		break;
	case paper:
		cout << "ぱー" << endl;
		break;
	}
}

void Draw(int &level, int &exp)
{
	cout << "=================================\nLv:" << level << "\nEXP:" << exp << "=================================\n";
}

void Judge(int player, int cpu, bool &playerwin)
{
	if (player == cpu)
	{
		cout << "あいこ" << endl;
	}
	else if (player - cpu == ConstNumber::JUDGE1 || player - cpu == ConstNumber::JUDGE2)
	{
		cout << "あなたの勝ち" << endl;
		playerwin = true;
	}
	else
	{
		cout << "相手の勝ち" << endl;
	}
}

void DrawLevel(int &level, int &exp)
{
	
}
