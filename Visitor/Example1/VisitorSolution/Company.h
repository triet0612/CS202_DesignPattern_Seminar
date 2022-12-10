#pragma once
#include "BuyVisitor.h"
#include "SellVisitor.h"
#include "OutputVisitor.h"
#include <vector>
using std::string;

class Company
{
private:
    string name;
    std::vector<IProduct*> productList;
public:
    void init();
    void test();
    void buy(IProduct* p);
    void sell(IProduct* p);
    void output();
};