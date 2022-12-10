#include "BookStore.h"
BookStore::BookStore(int size) :size(size) {
	bookShelf = new int[size];
	for (int i = 0; i < size; i++) {
		bookShelf[i] = i + 1;
	}
};
void BookStore::traverse1() {
	for (int i = 0; i < size; i++) {
		cout << bookShelf[i] << endl;
	}
}
void BookStore::traverse2() {
	for (int i = 0; i < size; i++) {
		if (i % 2 == 0) {
			cout << bookShelf[i] << endl;
		}
	}
}