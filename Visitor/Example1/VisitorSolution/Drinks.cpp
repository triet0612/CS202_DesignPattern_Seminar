#include "Drinks.h"
#include "IVisitor.h"
using namespace std;

Drinks::Drinks() {}

Drinks::Drinks(string name, int price)
{
    this->name = name;
    this->price = price;
}

void Drinks::accept(IVisitor* &v)
{
    v->visitDrinks(*this);
}

string Drinks::getName()
{
    return this->name;
}
string Drinks::getType()
{
    return "Drinks";
}
int Drinks::getPrice()
{
    return this->price;
}

void Drinks::output()
{
    cout << "------------------------" << endl <<
            "| Drinks: " << this->name << endl <<
            "| Price: " << this->price << endl <<
            "------------------------" << endl;
}
