#pragma once
#include "IProduct.h"
using std::string;

class Food: public IProduct
{
private:
    string name;
    int price;
public:
    Food();
    Food(string name, int price);
    std::string getName();
    std::string getType();
    int getPrice();
    void accept(IVisitor* &v);
    void output();
};
