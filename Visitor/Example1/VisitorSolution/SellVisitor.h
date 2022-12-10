#pragma once
#include "IVisitor.h"

class SellVisitor : public IVisitor
{
private:
	void boughtLog(string type, string name, int price);
public:
	void visitFood(Food food);
	void visitDrinks(Drinks drinks);
};
