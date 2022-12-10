#include "BookIterator.h"
BookIterator::BookIterator(BookStore c) {
	this->c = c;
}
bool BookIterator::hasNext() {
	if (index < c.getSize()) return true;
	return false;
}
void BookIterator::next() {
	++index;
}
int BookIterator::currentItem() {
	return c.bookShelf[index];
}