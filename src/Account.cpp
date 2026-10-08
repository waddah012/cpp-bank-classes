#include "Account.h"// this calls the account header file
using namespace std;

Account::Account(int accNum, Customer c) { // This is a constructor for the account class
    accountNumber = accNum;
    balance = 0.0;
    owner = c;    // this assigns the customer to the account number and whatever details in their account

}

void Account::AmountDeposited(double amount) { // functions helps add money to account
    balance += amount;  // increases balance by amount
    transactions.push_back(Transaction(transactions.size() + 1, "Deposit", amount));
}

void Account::AmountWithdrawn(double amount) { // this function helps remove money from account
    if (amount <= balance) {
        balance -= amount;  // decreases balance by amount
        transactions.push_back(Transaction(transactions.size() + 1, "Withdraw", amount));
    } else {
        cout << "Sorry, Insufficient funds for withdrawal." << endl;
    }
}

void Account::printAccount()  { // this will print all the details of the account
    cout << "Account Number: " << accountNumber << endl; //shows account number
    owner.printCustomer(); //calls customer class to print customer details.
    cout << "Balance: $" << balance << endl; //balance
    cout << "-- Transactions --" << endl;
    for (size_t i = 0; i < transactions.size(); i++) { //loops through all transaction history
    transactions[i].printTransaction();
}

    cout << endl;
}
