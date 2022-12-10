#include "BuyVisitor.h"
using namespace std;

void BuyVisitor::deliveredLog(string type, string name, int price)
{
    cout << "------------------------" << endl;
    cout << "| " << type <<" delivered" << endl << 
            "| " << type << ": " << name << endl <<
            "| Price: " << price << endl <<
            "------------------------" << endl;
}

void BuyVisitor::visitFood(Food food)
{
    FoodCount++;
    this->deliveredLog(food.getType(), food.getName(), food.getPrice());
}
void BuyVisitor::visitDrinks(Drinks drinks)
{
    DrinksCount++;
    this->deliveredLog(drinks.getType(), drinks.getName(), drinks.getPrice());
}