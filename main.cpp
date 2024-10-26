#include <iostream>
#include <string>

using namespace std;

struct Customer {
    int id;
    string name;
    string email;
};

int main() {
    Customer customer;

    cout<<"Enter customer ID: ";
    cin>>customer.id;
    cin.ignore();

    cout<<"Enter customer name: ";
    getline(cin, customer.name);

    cout<<"Enter customer email: ";
    getline(cin, customer.email);

    // Print customer details
    cout<<"\nCustomer Details:\n";
    cout<<"ID: "<< customer.id<<"\n";
    cout<<"Name: "<< customer.name<<"\n";
    cout<<"Email: "<<customer.email<< "\n";

    return 0;
}

