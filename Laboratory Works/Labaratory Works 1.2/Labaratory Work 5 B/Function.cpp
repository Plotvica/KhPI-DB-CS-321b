#include "HeaderOfFunctions.h"




void print_array(int* pointer, const int size) { // print function
	cout << "Array is:  ";
	for (int i = 0; i < size; i++) {
		*(pointer + i) = rand() % 21 - 10;
		cout << *(pointer + i) << setw(4);
	}
	cout << endl;
}



int summ(int *Array, int size) {

	bool flag = false;

	print_array(Array, size);

	int summ = 0;
	for (int i = 0; i < size; i++) {
		if (Array[i] > 0) {
			flag = true;
			summ += Array[i];
		}
	}

	if (flag == false) {
		return 0;
	} else return summ;

}

int mult (int* Array, int size) {

	bool flag = false;

	print_array(Array, size);

	int mult = 1;
	for (int i = 0; i < size; i++) {
		if (Array[i] < 0) {
			flag = true;
			mult *= Array[i];
		}
	}

	if (flag == false) {
		return 0;
	} else return mult;

}