#pragma once

namespace Config
{
	//カードの総枚数
	constexpr int CARD_NUM = 28;
	//カード分け分
	constexpr int CARD_DIVIDE = 7;
}

/// <summary>
/// カード生成
/// </summary>
/// <param name="card"></param>
void CardMake(int card[]);
/// <summary>
/// カード配り
/// </summary>
/// <param name="card"></param>
/// <param name="player"></param>
/// <param name="cpu"></param>
/// <param name="open"></param>
/// <param name="down"></param>
void CardDeal(int card[], int player[], int cpu[], int open[], int down[]);

/// <summary>
/// カードの描画
/// </summary>
/// <param name="player"></param>
/// <param name="cpu"></param>
/// <param name="open"></param>
/// <param name="down"></param>
void CardDraw(int player[], int cpu[], int open[]);
/// <summary>
/// カードの数字入力
/// </summary>
void Input(int input[]);
/// <summary>
/// 数字の判定
/// </summary>
/// <param name="input"></param>
/// <param name="player"></param>
void Judgment(int input[], int player[]);



