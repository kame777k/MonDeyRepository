#include<iostream>

using namespace std;

//値渡し・・・・・変数の中身をコピーして渡す
//参照渡し  ↓&・・元の変数そのものに別名を付けて渡す
void Add(int &num)
{
	num += 10;
}

int main(void)
{
	int number;

	cout << "数字を入力してください" << endl;

	cin >> number;

	Add(number);

	cout << number << "です" << endl;

	return 0;
}

