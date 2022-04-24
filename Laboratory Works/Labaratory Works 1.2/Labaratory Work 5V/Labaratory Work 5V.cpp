#include "HeaderOfFunctions.h"

int main()
{
   
    int size;
    void (*ptr)(int*, int);
    int menu_button;
    while (true) {

        cout << "1 - Booble, 2 - Shell, 3 - Shuttle  0 - Exit ";
        cin >> menu_button;

        if (menu_button == 1) {
            system("cls");
            ptr = BOBOLE;
            cout << "\t\t\t\tInput size"; cin >> size;
            int* array_Booble = new int[size];
            cout << "Booble sort:";
            ptr(array_Booble, size);
            delete[] array_Booble;
        }
        if (menu_button == 2) {
            system("cls");
            ptr = Shell;
            cout << "Input size: "; cin >> size;
            int* array_Shell = new int[size];
            cout << "\t\t\t\tShell sort";
            ptr(array_Shell, size);
            delete[] array_Shell;
        }
        if (menu_button == 3) {
            system("cls");
            ptr = Shuttle;
            cout << "Input size: "; cin >> size;
            int *array_Shuttle = new int[size];
            cout << "\t\t\t\tShuttle sort";
            ptr(array_Shuttle, size);
            delete[] array_Shuttle;
        }
        if (menu_button == 0) {
            system("cls");
            exit(NULL);
        }

    }


}

