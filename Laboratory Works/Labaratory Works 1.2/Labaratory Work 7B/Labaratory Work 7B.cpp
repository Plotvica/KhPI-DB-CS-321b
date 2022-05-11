#include "HeadsOfFunctions.h"



int main()
{

    srand(time(NULL));
    FILE* data;
    int summ = 0;
    int* array_1 = new int[size];
    int* array_2 = new int[size];
    for (int i = 0;i < size;i++) {
        *(array_1 + i) = rand() % 20 - 10;
    }
    First_part(array_1);
    Second_part(array_1, array_2);
    Third_part(array_2, &summ);



    delete[]array_1;
    delete[]array_2;
}


