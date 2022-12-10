#include "School.h"
School::School(int size) :numOfClassRoom(size) {
	classroom = new int[size];
	for (int i = 0; i < size; i++) {
		classroom[i] = i + 35;
	}
};
void School::traverse1() {
	for (int i = 0; i < numOfClassRoom; i++) {
		cout << classroom[i] << endl;
	}
}
void School::traverse2() {
	for (int i = 0; i < numOfClassRoom; i++) {
		if (i % 2 == 0) {
			cout << classroom[i] << endl;
		}
	}
}