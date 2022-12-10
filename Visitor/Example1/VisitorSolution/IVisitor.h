#pragma once
#include "Food.h"
#include "Drinks.h"

class IVisitor
{
public:
    static int FoodCount, DrinksCount;
    
    virtual void visitFood(Food food) = 0;
    virtual void visitDrinks(Drinks drinks) = 0;
};
