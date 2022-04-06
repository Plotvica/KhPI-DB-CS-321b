#include "HeaderOfFunctions.h"

#define SIZE 10
int main()
{

    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);   


    int A_Array[SIZE];
    int B_Array[SIZE];
    int C_Array[SIZE];
    int D_Array[SIZE];

    cout << "Array:";
    randomArray(A_Array, SIZE);
    printArray(A_Array, SIZE);
    task(A_Array, B_Array, C_Array, D_Array, SIZE);


}

