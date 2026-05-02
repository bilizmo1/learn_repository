#ifndef CLIENT_H
#define CLIENT_H

#include <string>
using namespace std;

class Client{
    private:
    string firstName;
    string lastName;
    string personalID;
    public:
    Client(string f, string l, string p);
    void getInfo();
    void setfirstName(string nowy);
    void setlastName(string nowy);
    void setPersonalID(string nowy);
};


#endif