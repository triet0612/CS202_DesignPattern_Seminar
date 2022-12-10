#pragma once
#include "IVisitor.h"

class BuyVisitor : public IVisitor
{
private:
	void deliveredLog(string type, string name, int price);
public:
	void visitFood(Food food);
	void visitDrinks(Drinks drinks);
};
