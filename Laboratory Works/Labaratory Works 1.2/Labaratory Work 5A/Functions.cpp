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
        cout << setw(5) << *(pointer + i) ;
    } cout << endl;
}

int* Task(int **Two_D_Array, int* Min_Array, int* Max_Array, int* summa, int* multiplication, int size) {

    RandomArray(Two_D_Array, size);


    // min find col 
    for (size_t j = 0; j < size; j++) {
        *(Min_Array + j) = INT_MAX;
        for (size_t i = 0; i < size; i++) {
            if (*(*(Two_D_Array + i) + j) <= *(Min_Array + j))
             *(Min_Array + j) = *(*(Two_D_Array + i)+ j);        
        }  
    } print_array(Min_Array, size);

    // max find row
    for (size_t i = 0; i < size; i++) {
        *(Max_Array + i) = INT_MIN;
        for (size_t j = 0; j < size; j++) {
            if (*(*(Two_D_Array + i) + j) >= *(Max_Array + i))
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



    int* back_task_Array = new int[2];
    *(back_task_Array + 0)  = *summa;
    *(back_task_Array + 1) = *multiplication;
    return back_task_Array;
    delete[] back_task_Array;

}