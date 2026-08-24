#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(void)
{
	srand((unsigned int)time(nullptr));

	int a;
	int* b = &a;

	for (int i = 0; i < 5; i++)
	{
		*b = rand() % 100;
		cout << a << endl;
	}
	
	return 0;
}