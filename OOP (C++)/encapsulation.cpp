#include <iostream>
using namespace std;

// Encapsulation means Wraping up data & member functions in a single unit class

// encapsulation is used for hiding sensitive information
class Account{

// data section

// hiding sesitive information
private:
    string password;
    double balance = 0;
// public information
public:
    string accountId;
    string username;
// member functions

// constructor
Account(){
    // init user when creating object
    cout << "Enter User Name: ";
    getline(cin, this->username);

    cout << "Enter password: ";
    getline(cin, this->password);

    // id genrator
    this->accountId = to_string(rand() % 10000999999);
    cout<<"Account added id -> "<< this->accountId<< endl;
}
// show balace
void showBalance(){
    cout<< "Your Account Balance is : "<< this->balance << endl;
}
// deposit balance
void deposit(double balance){
    this->balance += balance;
    cout<<"Deposited "<< balance <<endl;
}
};

main(){
    Account A1;
    A1.showBalance();
    A1.deposit(12000);
    A1.showBalance();
    return 0;
}