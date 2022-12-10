#include "SellVisitor.h"
using namespace std;

void SellVisitor::boughtLog(string type, string name, int price)
{
    cout << "------------------------" << endl;
    cout << "| " << type <<" bought" << endl << 
            "| " << type << ": " << name << endl <<
            "| Price: " << price << endl <<
            "------------------------" << endl;
}

void SellVisitor::visitFood(Food food)
{
    FoodCount--;
    this->boughtLog(food.getType(), food.getName(), food.getPrice());
}
void SellVisitor::visitDrinks(Drinks drinks)
{
    DrinksCount--;
    this->boughtLog(drinks.getType(), drinks.getName(), drinks.getPrice());
}