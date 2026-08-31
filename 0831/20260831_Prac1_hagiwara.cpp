#include "20260831_Prac1_hagiwara.h"
#include <iostream>
using namespace std;

//コンストラクタとメンバ変数の初期化
BankAccount::BankAccount(const string& holder, double initialBalance)
    : accountHolder(holder), balance(initialBalance) {
}
//残高を取得
double BankAccount::getBalance()const
{
    return balance;
}
//預入
void BankAccount::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        cout << "Deposited: " << amount << "\n";
    }
    else {
        cout << "Invalid deposit amount.\n";
    }
}
//引き出し
void BankAccount::withdraw(double amount) {
    if (amount > 0 && amount <= balance)
    {
        balance -= amount;
        cout << "Withdrawn: " << amount << "\n";
    }
    else
    {
        cout << "Invalid withdraw amount or insufficient funds.\n";
    }
}
//口座情報を表示
void BankAccount::displayAccountInfo() const
{
    cout << "Account Holder: " << accountHolder << "\n"
        << "Current Balance: " << balance << "\n";
}