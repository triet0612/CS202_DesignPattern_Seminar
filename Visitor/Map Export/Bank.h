#pragma once
#include "Entity.h"
using std::string;
using std::vector;

class Bank: public Entity {
public:
    void accept(Visitor* &v);
    void init();
    string getCompanyName() {
        return this->company;
    }
    string getAddress() {
        return this->address;
    }
    vector<string> getServices() {
        return this->supportingServices;
    }
private:
    string company;
    string address;
    vector<string> supportingServices;
};