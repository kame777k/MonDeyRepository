#pragma once
#include<string>
using namespace std;
class Animal
{
private:
	string name;

public:

	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <param name="name"></param>
	Animal(string name);

	string GetName();

	//子クラスでも再定義できるメソッド
	/// <summary>
	/// 鳴く
	/// </summary>
	virtual void Speak();
};

