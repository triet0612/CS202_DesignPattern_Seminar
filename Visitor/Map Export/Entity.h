#pragma once
#include <bits/stdc++.h>

class Visitor;

class Entity {
public:
    friend class Visitor;
    virtual void init() = 0;
    virtual void accept(Visitor* &v) = 0;
};