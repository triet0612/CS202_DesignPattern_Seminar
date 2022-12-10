#pragma once
#include "Iterator.h"
class Collection {
	virtual Iterator* createIterator() = 0;
};