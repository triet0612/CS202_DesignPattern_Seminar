#pragma once
#include "IVisitor.h"

class OutputVisitor : public IVisitor
{
public:
	void visitFood(Food food);
	void visitDrinks(Drinks drinks);
};

