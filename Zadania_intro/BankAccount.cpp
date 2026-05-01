#include <iostream>
#include "BankAccount.h"

using namespace std;

BankAccount::BankAccount(string o, string a, double b) {
    owner = o;
    accountNumber = a;
    balance = b;
}

void BankAccount::showData(){
    cout << "wlasciciel " << owner << " " << "numer konta" << " " << accountNumber << " "<< "saldo " << balance << endl;
}

void BankAccount::deposit(double amount){
    if (amount > 0){
        balance += amount;
        cout << "obecny balans wynosi: " << balance << endl;
    }
    else {
        cout << "liczba musi byc wieksza od 0" << endl;
    }
}

void BankAccount::withdraw(double amount){
    if (balance - amount > 0){
        balance -= amount;
        cout << "obecny balans wynosi: " << balance << endl;
    }
    else {
        cout << "Brak wystarczajacych srodkow" << endl;
    }
}

bool BankAccount::hasEnoughMoney(double amount){
    if (balance >= amount){
        return true;
    }
    return false;
}

BankAccount::~BankAccount(){
    cout << "usunieto obiekt" << endl;
}
    
