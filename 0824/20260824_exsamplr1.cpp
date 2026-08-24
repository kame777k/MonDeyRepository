#include <iostream>
using namespace std;

int main(void)
{

    int a = 0;
    //aのアドレスをpに教える
    int* p = &a;

    cout << "aの初期値: " << a << endl;

    //aのアドレスに10を代入する
    *p = 10;

    cout << "aの変更後の値: " << a << endl;

    return 0;
}