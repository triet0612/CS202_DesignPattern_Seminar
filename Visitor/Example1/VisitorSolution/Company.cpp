#include "Company.h"
using namespace std;

int IVisitor::FoodCount = 0;
int IVisitor::DrinksCount = 0;

void Company::test()
{
    this->init();
    this->output();
    this->buy(new Food("Burger", 12));
    this->buy(new Food("Nugget", 12));
    this->buy(new Drinks("beer", 12));
    this->buy(new Food("Vegan Burger", 12));
    this->buy(new Drinks("Coke", 12));
    this->output();
    this->sell(this->productList[1]);
    cout << IVisitor::FoodCount << endl;
    cout << IVisitor::DrinksCount << endl;
    this->output();
}
void Company::init()
{
    this->name = "HELLO";
    this->productList = {};
}
void Company::buy(IProduct* p)
{
    productList.push_back(p);
    IVisitor* b = new BuyVisitor();
    p->accept(b);
    delete b;
}
void Company::sell(IProduct* p)
{
    for (int i = 0; i < this->productList.size(); i++)
    {
        if (this->productList[i] == p)
        {
            productList.erase(this->productList.begin() + i);
            IVisitor* b = new SellVisitor();
            p->accept(b);
            delete b;
            break;
        }
    }
}
void Company::output()
{
    IVisitor* b = new OutputVisitor();
    for (IProduct* prod : productList)
    {
        prod->accept(b);
    }
    delete b;
}
