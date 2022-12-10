#pragma once
#include <iostream>
using namespace std;
class Iterator {
public:
	virtual bool hasNext() = 0;
	virtual void next() = 0;
	virtual int currentItem() = 0;
};