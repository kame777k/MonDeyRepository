#pragma once

namespace Config
{
	//===============================
	// ゲーム設定
	//===============================

	//能力値
	constexpr int MAX_HP = 100;
	constexpr int MAX_STATUS = 20;
	constexpr int MIN_STATUS = 1;

	//プレイヤーの行動
	constexpr int ACTION_ATTACK = 1;
	constexpr int ACTION_RECOVERY = 2;

	//ゲームオーバー条件
	constexpr int DEAD_HP = 0;

	//行動時のランダム値
	constexpr int MAX_RANDOM_VALUE = 12;
	constexpr int MIN_RANDOM_VALUE = 1;
	
}