#pragma once
class ScoreManager
{
private:
	int currentScore;//現在スコア
	int highScore;   //ハイスコア
public:
	//コンストラクタ
	ScoreManager();
	/// <summary>
	/// ポイント加算
	/// </summary>
	/// <param name="points"></param>
	void addPoints(int points);
	/// <summary>
	/// リセットスコア
	/// </summary>
	void resetScore();
	/// <summary>
	/// ハイスコア更新
	/// </summary>
	void updateHighScore();
	/// <summary>
	/// スコア描画
	/// </summary>
	void displayScores() const;
};

