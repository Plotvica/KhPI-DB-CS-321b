#include "HeadsOfFunctions.h"
int main()
{
    int* array_1 = new int[size];
    int* array_2 = new int[size];
    for (int i = 0;i < size;i++) {
        *(array_1 + i) = rand() % 10 + 1;
    }
    First_part(array_1);
    Second_part(array_1, array_2);
    Third_part(array_1, array_2);
    delete[]array_1;
    delete[]array_2;
}
