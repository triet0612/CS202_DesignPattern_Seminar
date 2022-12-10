#pragma once
#include "Entity.h"
using std::string;
using std::vector;

class ShoppingMall: public Entity {
public:
    void init();
    void accept(Visitor* &v);
    void updateBrandsList();
    bool isBrandInList(string brand);
    string getName() {
        return this->name;
    }
    string getAddress() {
        return this->address;
    }
    vector<string> getBrands() {
        return this->brandsList;
    }
private:
    string name;
    string address;
    int numberOfBrands;
    vector<string> brandsList;
};