#include "BankAccount.h"
#include <iostream>

using namespace std;

int main(){
    BankAccount acc1("Jan Kowalski", "123456789", 1000);

    acc1.showData();

    acc1.deposit(500);
    acc1.showData();
    
    acc1.withdraw(300);
    acc1.showData();
    
    acc1.withdraw(2000);
    acc1.showData();
}