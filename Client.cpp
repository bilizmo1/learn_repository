//Utwórz klasę Client z polami firstName, lastName, personalID (prywatne).
//Dodaj konstruktor bezparametrowy i destruktor wypisujące komunikaty.
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
    
    ~Client(){
        cout << "usunieto obiekt client" << endl;
    }
};

int main(){
    Client c("Adam", "Nowak", "0612938230");

    return 0;
}