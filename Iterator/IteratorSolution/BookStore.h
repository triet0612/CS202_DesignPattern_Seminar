#include "Collection.h"
class BookStore :public Collection {
private:
	int size;
public:
	int* bookShelf;
	BookStore();
	BookStore(int size);
	int getSize();
	Iterator* createIterator();
};