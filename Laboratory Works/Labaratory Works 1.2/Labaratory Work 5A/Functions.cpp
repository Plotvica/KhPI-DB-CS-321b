#include"HeaderOfFunctions.h"



void RandomArray(int** pointer, int size) {  // set a random 

    cout << "You array is:" << endl;
    for (size_t i = 0; i < size; i++) {
        for (size_t j = 0; j < size; j++) {
            *(*(pointer + i) + j) = rand() % 10 + 1;
            cout << setw(5) << *(*(pointer + i) + j);
        }  cout << endl;
    } cout << endl;

}

void print_array(int* pointer, int size) {
    for (int i = 0; i < size; i++) {
        *(pointer + i) = rand() % 10;
        cout << setw(5) << *(pointer + i) ;
    } cout << endl;
}

int Task(int **Two_D_Array, int* Min_Array, int* Max_Array, int* summa, int* multiplication, int size) {

    int* back_task_Array = new int[2];

    RandomArray(Two_D_Array, size);


    // min find col

    for (size_t j = 0; j < size; j++) {
        int min = INT_MAX;
        for (size_t i = 0; i < size; i++) {
            if (*(*(Two_D_Array + i) + j) <= min)
             *(Min_Array + j) = *(*(Two_D_Array + i) + j);
        }
    } print_array(Min_Array, size);

    // max find row

    for (size_t i = 0; i < size; i++) {
        int max = INT_MIN;
        for (size_t j = 0; j < size; j++) {
            if (*(*(Two_D_Array + i) + j) >= max)
                *(Max_Array + i) = *(*(Two_D_Array + i) + j);
        }
    } print_array(Max_Array, size);


    for (size_t i = 0; i < size; i++) {
        for (size_t j = 0; j < size; j++) {

            if (i == j) {
                *summa += *(*(Two_D_Array + i) + j);
            }
            if (i + j == size - 1) {
                *multiplication *= *(*(Two_D_Array + i) + j);
            }

        }
    }
    cout << *summa << endl;
    cout << *multiplication << endl;

    return 0;
}