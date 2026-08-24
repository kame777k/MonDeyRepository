#include<iostream>

using namespace std;

int main(void)
{
	int numbers[5] = { 35, 82, 17, 96, 54 };
	int* pNum = numbers;
	int max = 0 ;

	for (int i = 0; i < 5; i++)
	{
		cout << max << "‘Î" << *(pNum + i);
		if (*(pNum + i) > max)
		{
			max = *(pNum + i);
			
		}
		cout << "=" << max << endl;
	}

	return 0;
}
