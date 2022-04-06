#include "HeaderOfFunctions.h"

void printArray(int* pointer, const int size) {
	for (int i = 0; i < size; i++) {
		cout << setw(4) << pointer[i];
	} cout << endl;
}

void randomArray(int* pointer, const int size) {  // random set numbers for array
	for (int i = 0; i < size; i++) {
		pointer[i] = rand() % 20 - 10;
	}
}

void task(int* A_pointer, int* B_pointer, int* C_pointer, int* D_pointer, int SIZE){  // task B<0; C=0; D>0 then new A = 0; < 0; A>0
	
	int b_flag = 0, c_flag = 0, d_flag = 0;

	for (int a = 0, b=0, c = 0, d = 0; a < SIZE; a++) {
		if (A_pointer[a] < 0) {
			B_pointer[b] = A_pointer[a];	
			b += 1;
			b_flag = b;
		}
		else if(A_pointer[a] == 0) {
			C_pointer[c] = A_pointer[a];
			c += 1;
			c_flag = c;
		}
		else if (A_pointer[a] > 0) {
			D_pointer[d] = A_pointer[a];
			d += 1;
			d_flag = d;
		}
	}

	if (c_flag != 0) {
		for (int i = 0; i < c_flag; i++) {    // A < 0
			A_pointer[i] = C_pointer[i];
		}
	}

	if (b_flag != 0) {
		for (int i = 0, j = c_flag; i < b_flag ; i++, j++) {    // A = 0
			A_pointer[j] = B_pointer[i];
		}
	}

	if (d_flag != 0) {
		for (int i = 0, j = c_flag+b_flag  ; i < d_flag ; j++, i++) {    // A > 0
			A_pointer[j] = D_pointer[i];
		}
	}
	


	if (b_flag != 0) {
		cout << "B array:";
		printArray(B_pointer, b_flag);
	}
	else cout << "B array dose not exist!";
	if (c_flag != 0) {
		cout << "C array:";
		printArray(C_pointer, c_flag);
	}
	else cout << "C array dose not exist!";
	if (d_flag != 0) {
		cout << "D array:";
		printArray(D_pointer, d_flag);
	}
	else cout << "D array dose not exist!";

	cout << "New Array:";
	printArray(A_pointer, SIZE);
	

}