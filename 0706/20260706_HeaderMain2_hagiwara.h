#pragma once
#include<iostream>
using namespace std;

//—ñ‹“‘Ì
enum jannkenn
{
	rook,
	scissors,
	paper
};

namespace ConstNumber
{
	const int RANDAM_MAX = 15;
	const int RANDAM_MIN = 1;
	const int THRESHOLD = 20;
	const int CLEARCONDITION = 5;
	const int MAX = 2;
	const int MIN = 0;
	const int CPUHAND_MAX = 3;
	const int JUDGE1 = 2;
	const int JUDGE2 = -1;
}
/// <summary>
/// ƒQ[ƒ€‚ÌƒƒCƒ“ŠÖ”
/// </summary>
void Game();

/// <summary>
///“ü—ÍŠÖ”
/// </summary>
void Input(int& input, int max, int min);