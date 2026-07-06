#pragma once
#include<iostream>
using namespace std;

//名前空間で定数を保持する
//本当はconfig.hファイルに書くのが望ましい
namespace ConstNumber
{
	const int PLAYERHP = 100; //プレイヤーの体力
	const int HEAL = 20;
	const int MAX = 2;
	const int MIN = 1;
}


/// <summary>
/// 進行関数
/// </summary>
void Game();

/// <summary>
/// 回復関数
/// </summary>
void Heal(int recovery);

/// <summary>
/// 入力関数
/// </summary>
/// <param name="input">入力した値</param>
/// <param name="max">最大値</param>
/// <param name="min">最小値</param>
void Input(int& input, int max, int min);