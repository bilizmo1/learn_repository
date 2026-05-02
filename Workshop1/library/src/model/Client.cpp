#include <iostream>
#include "model/Client.h"

using namespace std;

Client::Client(string f, string l, string p){
    firstName = f;
    lastName = l;
    personalID = p;
}

void Client::getInfo(){
    cout << firstName << lastName << personalID << endl;
}

void Client::setfirstName(string nowy){
    firstName = nowy;
}

void Client::setlastName(string nowy){
    lastName = nowy;
}

void Client::setPersonalID(string nowy){
    personalID = nowy;
}