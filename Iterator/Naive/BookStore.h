#pragma once
#include <iostream>
using namespace std;
class BookStore {
private:
	int size;
public:
	int* bookShelf;
	BookStore(int size);
	void traverse1();
	void traverse2();
};