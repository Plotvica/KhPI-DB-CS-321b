#include"HeaderOfFunctions.h"



void print_array_A(int* pointer, int size) {

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << setw(4) << *(pointer + (i * size + j));
        }
        cout << endl;
    }

}

void print_array_B(int** pointer, int size) {

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << setw(4) << *(*(pointer + i) + j);
        }
        cout << endl;
    }

}

int* task_A(int* basicArray, int size) {
    
    int k = 0;
    int i = 0;
    int j = 0;

 
    while (k < size * size) {

        *(basicArray + (i * size + j)) = size * size - k;

        if (i <= j + 1 and i + j < size - 1) {
            j++;
        }

        else if (i < j and i + j >= size - 1) {
            i++;
        }

        else if (i >= j and i + j > size - 1) {
            j--;
        }

        else {
            i--;
        }

        k++;
    }
    return basicArray;
    
}


int** task_B(int** basicArray, int size) {

    int k = 0;
    int i = 0;
    int j = 0;

    while (k < size * size) {

        *(*(basicArray + i)+j) = size * size - k;

        if (i <= j + 1 and i + j < size - 1) {
            j++;
        }

        else if (i < j and i + j >= size - 1) {
            i++;
        }

        else if (i >= j and i + j > size - 1) {
            j--;
        }

        else {
            i--;
        }

        k++;
    }

    return basicArray;
}