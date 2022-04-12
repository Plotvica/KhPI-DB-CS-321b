#include "HeaderOfFunctions.h"




void print_array(int* pointer, const int size) { // print function
	for (int i = 0; i < size; i++) {
		cout << *(pointer + i) << setw(4);
	}
	cout << endl;
}




void randomArray(int* pointer, const int size) {  // random set numbers for array
	for (int i = 0; i < size; i++) {
		*(pointer + i) = rand() % 41 - 20;
	}
}




void a_task(int *pointer, int size) {       //а) относительный адрес;

	int summ = 0;
	int flag = 0;

	for (int i = 0; i < size; i++) {
		if (*(pointer + i) < 0) {
			flag++;
			summ += *(pointer + i);
		}
	}
	cout << "Summ -> " << summ << endl;
	cout << "Col -> " << flag << endl;


}




void b_task(int* pointer, int size) {       //б) через абсолютный адрес;

	int summ = 0;
	int flag = 0;

	for (int i = 0; i < size; i++, pointer++) {
		if (*pointer < 0) {
			flag++;
			summ += *pointer;
		}
	}
	cout << "Summ -> " << summ << endl;
	cout << "Col -> " << flag << endl;

	
}




void v_task(int array[], int size) {       //в) не использовать индексацию;

	int* pointer;
	int summ = 0;
	int flag = 0;

	for (pointer = array; pointer < array + size; pointer++) {
		if (*pointer < 0) {
			flag++;
			summ += *pointer;
		}
	}
	cout << "Summ -> " << summ << endl;
	cout << "Col -> " << flag << endl;


}





void g_task(int* pointer, int size) {       //г) через массив указателей;

	int* array_pointer[100];
	int summ = 0;
	int flag = 0;

	for (int i = 0; i < size; i++) {
		array_pointer[i] = &pointer[i];
	}

	for (int i = 0; i < size; i++) {
		if (*array_pointer[i] < 0) {
			flag++;
			summ += *array_pointer[i];
		}
	}
	cout << "Summ -> " << summ << endl;
	cout << "Col -> " << flag << endl;

	

}




void d_task(int* pointer, int size) {       //д) через указатель на указатель.
	
	int** ppointer = &pointer;
	int summ = 0;
	int flag = 0;

	for (int i = 0; i < size; i++) {
		if (**ppointer < 0) {
			flag++;
			summ += **ppointer;
		}
		*(++(*ppointer));
	}
	cout << "Summ -> " << summ << endl;
	cout << "Col -> " << flag << endl;


}




void e_task(int* pointer, int size, int* summ, int* flag) {       //е) оформить в виде функции с параметрами указателями.

	

	for (int i = 0; i < size; i++) {
		if (*(pointer + i) < 0) {
			(*flag)++;
			*summ += *(pointer + i);
		}
	}
	cout << "Summ -> " << *summ << endl;
	cout << "Col -> " << *flag << endl;


}