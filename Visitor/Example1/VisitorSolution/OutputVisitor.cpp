#include "OutputVisitor.h"
using namespace std;

void OutputVisitor::visitFood(Food food)
{
    food.output();
}
void OutputVisitor::visitDrinks(Drinks drinks)
{
    drinks.output();
}
