#include "HeaderOfFunctions.h"




void rand(int* pointer, const int size) { // random fill function

	for (int i = 0; i < size; i++) {
		*(pointer + i) = rand() % 21 - 10;
	}
	cout << endl;

}

void print_array(int* pointer, const int size) { // print function

	for (int i = 0; i < size; i++) {
		cout << *(pointer + i) << setw(4);
	}
	cout << endl << endl << endl;

}



void Shell(int* array, int size) {

    int d = size / 2;

    while (d > 0)
    {
        for (int i = 0; i < size - d; i++)
        {
            int j = i;
            while (j >= 0 && *(array + j) > *(array + j + d))
            {
                int temp = *(array + j);
                *(array + j) = *(array + j + d);
                *(array + j + d) = temp;
                j--;
            }
        }
        d = d / 2;
    }

}


void Shuttle(int* array, int size) {

    int j, i, temp;

    for (i = 1; i < size; i++) {

        j = i - 1;

        while (j >= 0) {

            if (*(array+j) > *(array + j + 1)) {
                temp = *(array + j);
                *(array + j) = *(array + j + 1);
                *(array + j + 1) = temp;
                j--;
            }
            else break;
        }
    }
 
}


void BOBOLE(int* array, int size) {

    for (size_t i = 0;i < size;i++) {

        for (size_t j = i + 1; j < size; j++) {
            if (*(array + i) > *(array + j)) {
                swap(*(array + i), *(array + j));
            }
        }
    }
}


void choose(int button_click, int* array, int size, void(*ptr)(int*, int )) {

    rand(array, size);
    cout << "Before array: ";
    print_array(array, size);
    
    
    //ptr(array, size);
    if (button_click == 1) {
        ptr = BOBOLE;
        ptr(array, size);
    }
    if (button_click == 2) {
        ptr = Shell;
        ptr(array, size);
    }
    if (button_click == 3) {
        ptr = Shuttle;
        ptr(array, size);
    }


    cout << "After array: ";
    print_array(array, size);

}