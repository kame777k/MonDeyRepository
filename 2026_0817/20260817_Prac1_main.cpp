#include <iostream>
#include <cstdlib>
#include <ctime>
#include "20260817_Prac1_header.h"

using namespace std;

//定数
const int PITING_MIN = 0;
const int PITING_MAX = 3;
const int PROBABILITY = 4;
const int STRIKE_COUNT = 3;
const int BALL_COUNT = 4;
const int OUT_COUNT = 3;
const int HIT_COUNT = 4;

int main(void)
{
    //変数
    int ply, emy;
    int prod;
    int Strike = 0;
    int Ball = 0;
    int Out = 0;
    int Hit = 0;

    //乱数
    srand((unsigned int)time(NULL));

    cout << "野球盤ゲームスタートです" << endl;
    cout << "プレイヤーはピッチャーとなり、この回を守り切ってください" << endl;

    //ゲームスタート
    while (Out < OUT_COUNT && Hit < HIT_COUNT)
    {
        cout << "投げる球を選んでください" << endl;
        cout << "0:ストレート "
            << "1:カーブ "
            << "2:スライダー "
            << "3:シンカー"
            << endl;

        //入力チェック
        while (true)
        {
            cin >> ply;

            if (PITING_MIN > ply || PITING_MAX < ply)
            {
                cout << "入力に誤りがあります。"
                    << "再度入力してください。"
                    << endl;
            }
            else
            {
                break;
            }
        }

        //入力された球種の描画
        PitingType(ply);

        //バッターの手をランダムで決める
        emy = rand() % PROBABILITY;

        //結果の確率決定
        prod = rand() % PROBABILITY;

        //プレイヤーと敵の手が違ったら
        if (ply != emy)
        {
            //確率が0の時
            if (prod == 0)
            {
                cout << "ボール！" << endl;
                Ball++;
            }
            //確率が0以外の時
            else
            {
                cout << "ストライク！！" << endl;
                Strike++;
            }
        }
        //プレイヤーと敵の手が同じとき
        else
        {
            //ストライクとボールの初期化
            Strike = 0;
            Ball = 0;
            //確率が1の時
            if (prod == 1)
            {
                cout << "OUT!!!" << endl;
                //アウトを1増やす
                Out++;
            }
            //確率が1以外の時
            else
            {
                cout << "HIT!!" << endl;
                //ヒットを1増やす
                Hit++;
            }
        }
        //ストライクがストライクカウント以上になる時、もしくはボールがボールカウント以上になる時
        if (Strike >= STRIKE_COUNT || Ball >= BALL_COUNT)
        {
            //ストライクがストライクカウント以上になった時
            if (Strike >= STRIKE_COUNT)
            {
                Out++;
            }
            //ストライクがストライクカウント未満の時
            else
            {
                Hit++;
            }

            //ストライクとボールの初期化
            Strike = 0;
            Ball = 0;
        }

        //ボール、ストライク、アウト、ヒットのカウント描画
        cout << "B:" << Ball << endl;
        cout << "S:" << Strike << endl;
        cout << "O:" << Out << endl;
        cout << "Runner:" << Hit << endl;

    }

    //判定
    Result(Out);

    return 0;
}