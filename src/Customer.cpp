#include "Customer.h" // calls the customer header file
using namespace std;

Customer::Customer(int id, string n) { //constructor for the customer class
    customerID = id;
    name = n;
}

void Customer::setDetails(int id, string n) { //update the customer info
    customerID = id;
    name = n;
}

int Customer::getID()  { // this returns the customer ID
    return customerID;
}

string Customer::getName() { // this return the customer name
    return name;
}

void Customer::printCustomer() { // prints out customer details to the screen
    cout << "Customer ID: " << customerID
         << ", Name: " << name << endl;
}
