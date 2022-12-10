#include "BookStore.h"
class BookIterator :public Iterator {
public:
	BookIterator(BookStore c);
	bool hasNext();
	void next();
	int currentItem();
private:
	int index = 0;
	BookStore c;
};