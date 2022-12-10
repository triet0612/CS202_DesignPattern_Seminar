#include "Collection.h"
class School : public Collection{
private:
	int numOfClassRoom;
public:
	int* classroom;
	School();
	School(int size);
	int getSize();
	Iterator* createIterator();
};