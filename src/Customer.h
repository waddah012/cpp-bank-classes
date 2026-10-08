#ifndef CUSTOMER_H //defines the file Customer.h if it hasnt been defined yet
#define CUSTOMER_H // this defines the file Customer.h so its not included twice


#include <string> // allows the use of strings
#include <iostream>
using namespace std;

class Customer { // starts the customer class and defines how the data is designed
private: //private class so that variables can only be accessed from the class itself and not from main
    int customerID; // each customer will have their own ID
    string name; // each customer will have their own name

public: // a class anyone can access
    Customer(int id = 0,  string n = ""); //special function after the new customer is created
    void setDetails(int id, string n); // function to update customer info
    int getID() ; // the function to return customer ID
    string getName() ; // function returns customer name
    void printCustomer(); // this prints out customer details
};

#endif
