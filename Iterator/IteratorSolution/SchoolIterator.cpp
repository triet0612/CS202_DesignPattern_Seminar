#include "SchoolIterator.h"
SchoolIterator::SchoolIterator(School s) {
	this->s = s;
}
bool SchoolIterator::hasNext() {
	if (index < s.getSize()) return true;
	return false;
}
void SchoolIterator::next() {
	++index;
}
int SchoolIterator::currentItem() {
	return s.classroom[index];
}