#include "Bank.h"
#include "Visitor.h"
using namespace std;

void Bank::accept(Visitor* &v) {
    v->visitBank(*this);
}

void Bank::init() {
    cin.ignore(1000, '\n');
    cout << "Enter the name of the bank: ";
    getline(cin, this->company);
    cout << "Enter the address of the bank: ";
    getline(cin, this->address);
    cout << "Enter the number of supporting services: ";
    int numberOfServices;
    cin >> numberOfServices;
    for (int i = 0; i < numberOfServices; i++) {
        string service;
        cout << "Enter the name of supporting service " << i + 1 << ": ";
        cin.ignore(10, '\n');
        getline(cin, service);
        this->supportingServices.push_back(service);
    }
}