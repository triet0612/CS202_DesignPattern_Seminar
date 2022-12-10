#include "SchoolIterator.h"
School::School() {
	numOfClassRoom = 0;
	classroom = nullptr;
}
School::School(int size) : numOfClassRoom(size) {
	classroom = new int[size];
	for (int i = 0; i < size; i++) {
		classroom[i] = i + 35;
	}
}
int School::getSize() {
	return numOfClassRoom;
}
Iterator* School::createIterator() {
	return new SchoolIterator(*this);
}