#include "BookIterator.h"
#include "SchoolIterator.h"
int main() {
	BookStore listShelf(10);
	Iterator* it = listShelf.createIterator();

	cout << "Traverse all elements of book store: " << endl;
	for (it; it->hasNext() == true; it->next()) {
		cout << it->currentItem() << endl;
	}

	cout << "Traverse even elements of book store: " << endl;
	int count = 0;
	it = listShelf.createIterator();
	for (it; it->hasNext(); it->next()) {
		if (count % 2 == 0) cout << it->currentItem() << endl;
		count++;
	}

	School school(10);
	it = school.createIterator();
	cout << "The number of students of each classroom in school: " << endl;
	for (it; it->hasNext() == true; it->next()) {
		cout << it->currentItem() << endl;
	}
	return 0;
}