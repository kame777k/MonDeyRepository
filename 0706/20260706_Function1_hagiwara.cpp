#include<iostream>
#include"20260706_Header1_hagiwara.h"
using namespace std;

void Game()
{
	int input;
	cout << "回復しますか？\n" << "1:はい 2:いいえ" << endl;
	Input(input, ConstNumber::MAX, ConstNumber::MIN);     //入力
	Heal(input);                                          //判定
}
//回復
void Heal(int recovery)
{
	int playerhp = ConstNumber::PLAYERHP;
	if (recovery == 1)
	{
		playerhp += ConstNumber::HEAL;
		cout << "HPを" << ConstNumber::HEAL << "回復しました。\n";
	}
	else
	{
		cout << "回復しませんでした。\n" << "現在のHPは" << playerhp << "です。" << endl;
	}
	cout << "現在のHPは" << playerhp << "です。" << endl;
}
//入力
void Input(int &input,int max,int min)
{
	while (true)
	{
		cin >> input;
		if (input < min || input  > max)
		{
			cout << "入力が誤っています。" << endl;
		}
		else
		{
			break;
		}
	}
}