#include "BookStore.h"
#include "School.h"
int main() {
	BookStore b(10);
	cout << "Traverse all elements in store: " << endl;
	b.traverse1();
	cout << "Traverse even elements in store: " << endl;
	b.traverse2();

	School s(10);
	cout << "The number of students in each class is: " << endl;
	s.traverse1();
	cout << "The number of students in each even class is: " << endl;
	s.traverse2();
}