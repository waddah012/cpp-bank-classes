#ifndef ACCOUNT_H //defines the file Account.h if it hasnt been defined yet
#define ACCOUNT_H // this defines the file Account.h so its not included twince

#include "Customer.h" // this pulls the customer class because the owner of the account is customer
#include "Transaction.h" // this is needed to keep track of deposit
#include <vector> // this is a library that allows the use of vectors
#include <iostream>
using namespace std;

class Account { // Starts the account class and defines how it works
private:
    int accountNumber;  // each account has its own number
    double balance;  //keeps track of the balance
    Customer owner; // this stores the customer object to his own account
    vector<Transaction> transactions; // shows the transaction history of an account

public:
    Account(int accNum,  Customer c); //constructor
    void AmountDeposited(double amount); // function to deposit money
    void AmountWithdrawn(double amount); // function to withdraw money
    void printAccount(); // printing out function details
};

#endif
