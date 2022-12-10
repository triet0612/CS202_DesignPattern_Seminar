#include "School.h"
class SchoolIterator :public Iterator {
public:
	SchoolIterator(School s);
	bool hasNext();
	void next();
	int currentItem();
private:
	int index = 0;
	School s;
};