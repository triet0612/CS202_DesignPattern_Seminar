#include "BookIterator.h"
BookStore::BookStore() {
	size = 0;
	bookShelf = nullptr;
};
BookStore::BookStore(int size) :size(size) {
	bookShelf = new int[size];
	for (int i = 0; i < size; i++) {
		bookShelf[i] = i + 1;
	}
};
int BookStore::getSize() {
	return size;
} 
Iterator* BookStore::createIterator() {
	return new BookIterator(*this);
}