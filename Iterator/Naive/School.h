#pragma once
#include <iostream>
using namespace std;
class School {
private:
	int numOfClassRoom;
public:
	int* classroom;
	School(int size);
	void traverse1();
	void traverse2();
};