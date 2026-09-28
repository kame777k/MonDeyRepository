#pragma once

namespace Config
{
	//=====================================
	// カードの設定
	//=====================================
	//全部のカードの枚数
	constexpr int CARD_TOTAL = 44;
	//カードの最大値
	constexpr int CARD_MAX = 11;
	//カードの最小値
	constexpr int CARD_MIN = 1;
	//カードの種類
	constexpr int CARD_TYPE = 4;

	//=====================================
	// ゲームの設定
	//=====================================
	
	//目標点
	constexpr int TARGET_SCORE = 21;
	//CUPがカードを引く条件
	constexpr int CUP_DRAW_CONDITION = 15;
	//最初に配るカード枚数
	constexpr int FIRST_DRAW_NUM = 2;

	//=====================================
	// プレイヤーの設定
	//=====================================

	//カードドロー
	constexpr int PLAYER_DRAW_YES = 0;
	//ドローストップ
	constexpr int PLAYER_DRAW_NO = 1;
}