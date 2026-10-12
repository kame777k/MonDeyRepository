#include<iostream>
#include"Dog.h"
#include"Cat.h"
using namespace std;

int main(void)
{
	Dog dog("”L");
	Cat cat("Œ¢");
	cout << dog.GetName() << endl;
	dog.Speak();
	cout << cat.GetName() << endl;
	cat.Speak();
	return 0;
}