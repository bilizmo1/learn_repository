#include "model/Client.h"
#include <iostream>

using namespace std;

int main(){
    Client c1("Jan", "Kowalski", "12345677");

    c1.getInfo();

    c1.setfirstName("Marek");

    c1.getInfo();

    c1.setlastName("Nowacki");

    c1.getInfo();

    c1.setPersonalID("3322112233");

    c1.getInfo();
}