/*

Assignemnt 2: CRC modeling of Banking system

TThis is the main file and the program basically demonstrates
a simple banking system using classes in C++
such classes include Customer, Account, Transaction and Bank.
this program performs deposits and withdraws then prints account details.

To compile: g++ main.cpp -o bank_system
To run: ./bankapp

*/

#include "Bank.h"
#include "Customer.h"
#include "Account.h"
#include "Transaction.h"
#include <iostream>


int main() {

    Customer customer1(1304, "Gabriel Montana"); // This will create a customer and her ID is 101

    Account account1(13040, customer1); //This creates an account for Gabriel which is the customer.


    account1.AmountDeposited(500); // Here i will be performing some transaction for gabriel
    account1.AmountWithdrawn(200);
    account1.AmountWithdrawn(400); // Gabriel here will attempt to withdraw some cash.


    Bank myBank("Express Credit Union Bank"); // This is the name of the bank Express Credit union,
    myBank.addAccount(account1); // After creating the bank the account info will be added


    myBank.printAccounts();// This will print all the info of the bank including the account info and the customer info.

    return 0;
}
