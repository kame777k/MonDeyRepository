#include "Turn.h"
#include <iostream>
#include "Config.h"

using namespace std;

bool Turn::PlayPlayerTurn(Player* player, CardManager* cardManager)
{
	while (true)
	{
		cout << "\n===========================\n";
		cout << "PLAYER Turn\n";
		cout << "===========================\n";

		player->Draw();
		if (player->GetTotal() == Config::TARGET_SCORE)
		{
			cout << "\nPlayer's Total : 21\n";

			return true;
		}

		cout << "\nカードを引きますか？？\n";
		cout << Config::PLAYER_DRAW_YES << ":Yes\n";
		cout << Config::PLAYER_DRAW_NO << ":No\n";

		int input;

		cin >> input;

		//カード引かない
		if (input == Config::PLAYER_DRAW_NO)
		{
			cout << "\nカードを引きません\n";
			return true;
		}

		if (input == Config::PLAYER_DRAW_YES)
		{
			//カードを取得
			int card = cardManager->DrawCard();

			cout << "\nPlayerがカードを引きました\n";
			cout << "引いたカード:" << card << endl;

			//Playerに引いたカードを追加
			player->AddCard(card);

			player->Draw();
		}
		if (player->GetTotal() > Config::TARGET_SCORE)
		{
			cout << "\nPlayerはバーストしました\n";
			return false;
		}
	}
}

void Turn::PlayCpuTurn(Player* player, CPU* cpu, CardManager* cardManager)
{
	cout << "\n===========================\n";
	cout << "CPU Turn\n";
	cout << "===========================\n";
	player->Draw();
	cpu->Draw();

	while (true)
	{
		if (cpu->GetTotal() == Config::TARGET_SCORE)
		{
			cout << "CPU'S Total: 21 \n";
			break;
		}


		if (cpu->GetTotal() > Config::TARGET_SCORE)
		{
			cout << "\nCPUはバーストしました\n";
			break;
		}


		if (cpu->GetTotal() <= Config::CUP_DRAW_CONDITION)
		{
			cout << "\nCPUは15以下なのでカードを引きます。\n";
		}
		else if (cpu->GetTotal() < player->GetTotal())
		{
			cout << "CPUはPlayerより小さいのでカードを引きます。" << endl;
		}
		else
		{
			cout << "CPUはPlayer以上になりました。" << endl;
			cout << "CPUはカードを引きません。" << endl;

			break;
		}

		//カードを取得
		int card = cardManager->DrawCard();
		cout << "\nCPUがカードを引きました\n";
		cout << "引いたカード:" << card << endl;
		//CPUに引いたカードを追加
		cpu->AddCard(card);
		cpu->Draw();
	}
}