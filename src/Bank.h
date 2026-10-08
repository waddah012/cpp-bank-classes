#ifndef BANK_H  //This defined the file Bank.h if it hasnt been defined yet
#define BANK_H  // this defines the file Bank.h so its not included twince

#include "Account.h" // Pulls the account class so bank can use it
#include <vector> // allows the use of vectors
#include <string> //allows the use of strings
#include <iostream>
using namespace std;

class Bank { // this is the bank class and how the bank object will work.
private:  //private class so that variables can only be accessed from the class itself and not from main
    string bankName; // this stores the name of the bank
    vector<Account> accounts; // a vector that stores multiple accounts objects to bank

public:  //a class anyone can access
    Bank(string name); //constructor that takes in the name of the bank
    void addAccount(Account& acc); // this lets you add an account to the bank list
    void printAccounts(); //  prints out the accounts
};

#endif // for compiler to know where the file ends
