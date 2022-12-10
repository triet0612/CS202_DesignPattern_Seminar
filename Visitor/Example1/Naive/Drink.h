#pragma once
#include "Product.h"
using namespace std;

class Drink: public Product
{
public:
    Drink(): Product() {};
    Drink(string names, int price)
        : Product(names, price, "drink") {}
    ~Drink() {}
    virtual void delivered()
    {
        cout << "------------------------" << endl <<
                "| Item delivered" << endl <<
                "| Food: " << this->getName() << endl <<
                "| ProductType: " << this->getType() << endl << 
                "| Price: " << this->getPrice() << endl << 
                "------------------------" << endl;
    }
    virtual void bought()
    {
        cout << "------------------------" << endl << 
                "| Item bought" << endl <<
                "| Food: " << this->getName() << endl <<
                "| ProductType: " << this->getType() << endl << 
                "| Price: " << this->getPrice() << endl << 
                "------------------------" << endl;
    }
};
