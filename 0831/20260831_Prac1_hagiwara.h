#pragma once
#include<string>
using namespace std;
class BankAccount
{
private:
    std::string accountHolder; // 口座名義人
    double balance;            // 残高

public:
    //コンストラクタ
    BankAccount(const string& holder, double initialBalance);
    /// <summary>
    /// 残高取得
    /// </summary>
    /// <returns></returns>
    double getBalance() const;
    /// <summary>
    /// 預け入れ
    /// </summary>
    /// <param name="amount"></param>
    void deposit(double amount);
    /// <summary>
    /// 引き出し
    /// </summary>
    /// <param name="amount"></param>
    void withdraw(double amount);
    /// <summary>
    /// 口座情報を表示
    /// </summary>
    void displayAccountInfo() const;
};