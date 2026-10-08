#include "Transaction.h" // includes the transaction header file
using namespace std;

Transaction::Transaction(int id, string t, double amt) { // constructor for transaction class
    transactionID=id; // this creates the transaction ID
    type=t; // this shows the type of transaction either deposit or withdraw
    amount=amt; // this shows the amount of money involved in the transaction
}

void Transaction::printTransaction() { // this prints out the transaction detail to the screen
    cout << "Transaction ID: " << transactionID
         << " ~~Type: " << type
         << " ~~Amount: $" << amount << endl;
}
