#pragma once
#include "Visitor.h"

class MapExportVisitor: public Visitor {
public:
    void visitShoppingMall(ShoppingMall sm);
    void visitCoffeeShop(CoffeeShop cs);
    void visitBank(Bank b);
};