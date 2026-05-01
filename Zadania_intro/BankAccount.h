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
    void withdraw(double amount);
    ~BankAccount();
    
};

#endif