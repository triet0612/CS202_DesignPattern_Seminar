#pragma once
#include <bits/stdc++.h>

class IVisitor;

class IProduct
{
public:
    // friend class IVisitor;
    
    virtual void accept(IVisitor* &v) = 0;

    virtual std::string getName() = 0;
    virtual int getPrice() = 0;
    virtual void output() = 0;
};
