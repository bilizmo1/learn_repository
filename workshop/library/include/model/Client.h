#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Client {
private:
    string firstName;
    string lastName;
    string personalID;

public:
    Client(string f, string l, string p){
        firstName = f;
        lastName = l;
        personalID = p;
    }
    void getInfo(){
        cout << "Client" << firstName << lastName << personalID << endl;
    }

};