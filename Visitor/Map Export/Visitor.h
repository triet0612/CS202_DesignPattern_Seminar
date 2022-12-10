#pragma once
#include "ShoppingMall.h"
#include "CoffeeShop.h"
#include "Bank.h"

class Visitor {
public:
    virtual void visitShoppingMall(ShoppingMall s) = 0;
    virtual void visitCoffeeShop(CoffeeShop c) = 0;
    virtual void visitBank(Bank b) = 0;
};