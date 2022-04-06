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



    int menu_button;
    while (true) {

        cout << "1 – Feed randomly the array, 2 - Print A array, 3 - Complite the task  0 - Exit ";
        cin >> menu_button;

        if (menu_button == 1) {
            system("cls");
            randomArray(A_Array, SIZE);
        }
        if (menu_button == 2) {
            system("cls");
            cout << "A array:" << endl;
            printArray(A_Array, SIZE);
        }
        if (menu_button == 3) {
            task(A_Array, B_Array, C_Array, D_Array, SIZE);
        }
        if (menu_button == 0) {
            exit(0);
        }

    }


}

