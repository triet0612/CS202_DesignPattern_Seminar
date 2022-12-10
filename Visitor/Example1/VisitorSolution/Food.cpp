#include "Food.h"
#include "IVisitor.h"
using namespace std;

Food::Food() {}

Food::Food(string name, int price)
{
    this->name = name;
    this->price = price;
}

void Food::accept(IVisitor* &v)
{
    v->visitFood(*this);
}

string Food::getName()
{
    return this->name;
}
string Food::getType()
{
    return "Food";
}
int Food::getPrice()
{
    return this->price;
}

void Food::output()
{
    cout << "------------------------" << endl <<
            "| Food: " << this->name << endl <<
            "| Price: " << this->price << endl <<
            "------------------------" << endl;
}
