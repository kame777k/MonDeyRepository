#include<iostream>
using namespace std;


void a(int num[])
{
	
}

int main(void)
{
	int numbers[5] = { 10, 20, 30, 40, 50 };
	int* pNum = numbers;

	for (int i = 0; i < 5; i++)
	{
		cout << *(pNum + i) << endl;
	}
	return 0;
}
