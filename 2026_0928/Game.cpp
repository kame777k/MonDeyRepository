#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Game.h"
#include "Config.h"

using namespace std;

Game::Game()
{
	cardManager.CreateCards();
	cardManager.ShuffleCards();
}

void Game::Run()
{
	DealInitialCards();
	bool playerTurnResult = turn.PlayPlayerTurn(&player, &cardManager);
	if (playerTurnResult)
	{
		turn.PlayCpuTurn(&player, &cpu, &cardManager);
	}
	else
	{
		cout << "\nPlayerの負けです。\n";

		return;
	}
	Draw();
}
void Game::DealInitialCards()
{
	for (int i = 0; i < Config::FIRST_DRAW_NUM; i++)
	{
		int playerCard = cardManager.DrawCard();
		player.AddCard(playerCard);
		int cpuCard = cardManager.DrawCard();
		cpu.AddCard(cpuCard);
	}
}
void Game::Draw()
{
	cout << "\n===========================\n";
	cout << "ゲーム結果\n";
	cout << "===========================\n";
	player.Draw();
	cpu.Draw();
	int playerTotal = player.GetTotal();
	int cpuTotal = cpu.GetTotal();

	if (cpuTotal > Config::TARGET_SCORE || playerTotal == Config::TARGET_SCORE)
	{
		cout << "\nPlayer'S Winner!!\n";
		return;
	}

	if (cpuTotal == Config::TARGET_SCORE)
	{
		cout << "\nCPU'S Winner!!\n";
		return;

	}
	int playerDistance = Config::TARGET_SCORE - playerTotal;

	int cpuDistance = Config::TARGET_SCORE - cpuTotal;

	if (playerDistance < cpuDistance)
	{
		cout << "\nPlayerの勝ちです。\n";
	}
	else if (playerDistance > cpuDistance)
	{
		cout << "\nCPUの勝ちです。\n";
	}
	else
	{
		cout << "\n引き分けです。\n";
	}

}