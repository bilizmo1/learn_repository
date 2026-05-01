#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H


#include <string>
using namespace std;

class BankAccount{
    private:
    string owner;
    string accountNumber;
    double balance;
    public:
    BankAccount(string o, string n, double b);
    void showData();
    void deposit(double amount);
    void withdraw(double amount);
    bool hasEnoughMoney(double amount);
    ~BankAccount();
    
};

#endif