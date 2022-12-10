#pragma once
#include "Entity.h"
using std::string;
using std::vector;
using std::pair;

class CoffeeShop: public Entity {
public:
    void init();
    void accept(Visitor* &v);
    void updateMenu();
    bool isInMenu(string itemName);
    string getName() {
        return this->name;
    }
    string getAddress() {
        return this->address;
    }
    vector<pair<string, double>> getMenu() {
        return this->menu;
    }
private:
    void inputMenu();
    string name;
    string address;
    vector<pair<string, double>> menu;
};