#ifndef TRANSACTION_H //defines the file Transaction.h if it hasnt been defined yet
#define TRANSACTION_H // this defines the file Transaction.h so its not included twice

#include <string>
#include <iostream>
using namespace std;

class Transaction {// This shows the transaction class and how it works
private: // private class so that variables can only be accessed from the class itself and not from main
    int transactionID; // a number that identifies each transaction
    string type; // this shows the type of transaction either deposit or withdraw
    double amount; // this shows the amount of money involved in the transaction

public: // a class anyone can access
    Transaction(int id, string t, double amt); // constructor that takes in the transaction details
    void printTransaction(); // this prints out the transaction details
};

#endif
