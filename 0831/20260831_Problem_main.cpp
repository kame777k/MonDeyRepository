#include<iostream>

#include"20260831_Prac1_hagiwara.h"

int main() 
{
    //コンストラクタ
    BankAccount account("Alice", 5000.0);
    //口座情報を表示
    account.displayAccountInfo();
    //1000ドルを預入
    account.deposit(1000.0);
    //2000ドルを引き出し
    account.withdraw(2000.0);
    account.withdraw(5000.0); // 残高不足で失敗
    //口座情報を表示
    account.displayAccountInfo();

    return 0;
}
