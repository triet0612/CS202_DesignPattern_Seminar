#pragma once
#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    string name;
    int price;
    string productType;
public:
    Product(): name(""), price(0), productType("") {};
    Product(string names, int price, string productType): Product()
    {
        this->name = names;
        this->price = price;
        this->productType = productType;
    }
    ~Product() {}

    string getName()
    {
        return this->name;
    }
    int getPrice()
    {
        return this->price;
    }
    string getType()
    {
        return this->productType;
    }
    void output()
    {
        cout << this->name << " " << 
                this->productType << " " <<
                this->price << endl;
    }
    virtual void delivered() = 0;
    virtual void bought() = 0;
};
