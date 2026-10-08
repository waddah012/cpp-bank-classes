#include "Bank.h" // calls the bank header file
using namespace std;

Bank::Bank(string name) : bankName(name) {} // constructor of bank class

void Bank::addAccount(Account& acc) { //adds a new account to the bank
    accounts.push_back(acc);
}

void Bank::printAccounts() {  // prints all the accounts in the bank
    cout << "Bank: " << bankName << endl;
    cout << "_________________" << endl;
    for (int i = 0; i < accounts.size(); i++) { //loop that goes through each account saved
        accounts[i].printAccount(); //shows account info
    }

}
