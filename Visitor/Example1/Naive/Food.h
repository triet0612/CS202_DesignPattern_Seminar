#pragma once
#include "Product.h"
using namespace std;

class Food: public Product
{
public:
    Food(): Product() {};
    Food(string names, int price)
        : Product(names, price, "food") {}    
    ~Food() {}
    virtual void delivered()
    {
        cout << "------------------------" << endl;
        cout << "| Food delivered" << endl << 
                "| Food: " << this->getName() << endl <<
                "| ProductType: " << this->getType() << endl << 
                "| Price: " << this->getPrice() << endl <<
                "------------------------" << endl;
    }
    virtual void bought()
    {
        cout << "------------------------" << endl <<
                "| Food bought" << endl << 
                "| Food: " << this->getName() << endl <<
                "| ProductType: " << this->getType() << endl << 
                "| Price: " << this->getPrice() << endl;
        cout << "------------------------" << endl;
    }
};
