#pragma once

namespace Config
{
	//===============================
	// ゲーム設定
	//===============================

	//能力値
	constexpr int MAX_HP = 100;
	constexpr int MAX_RAND_NUM = 20;
	constexpr int MIN_RAND_NUM = 1;

	//プレイヤーの行動
	constexpr int PLAYER_ATTACK = 1;
	constexpr int PLAYER_RECOVERY = 2;

	//ゲームオーバー条件
	constexpr int MIN_HP = 0;


	//行動の数値設定
	constexpr int ACTION_MAX_RAND_NUM = 12;
	constexpr int ACTION_MIN_RAND_NUM = 1;
	
}