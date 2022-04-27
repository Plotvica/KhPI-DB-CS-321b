#include "HeaderOfFunctions.h"

int main()
{
   
    int size;
    void (*ptr)(int*, int) = 0;
    int menu_button;
 


    while (true) {

        cout << "1 - Booble, 2 - Shell, 3 - Shuttle  0 - Exit ";
        cin >> menu_button;

        if (menu_button == 1) {
            system("cls");
            cout << "\t\t\t\tInput size: "; cin >> size;
            int* array_Booble = new int[size];
            cout << "Booble sort:";
            choose(1, array_Booble, size, ptr);
            delete[] array_Booble;
        }
        if (menu_button == 2) {
            system("cls");
            cout << "Input size: "; cin >> size;
            int* array_Shell = new int[size];
            cout << "\t\t\t\tShell sort";
            choose(2, array_Shell, size, ptr);
            delete[] array_Shell;
        }
        if (menu_button == 3) {
            system("cls");
            cout << "Input size: "; cin >> size;
            int* array_Shuttle = new int[size];
            cout << "\t\t\t\tShuttle sort";
            choose(3, array_Shuttle, size, ptr);
            delete[] array_Shuttle;
        }
        if (menu_button == 0) {
            system("cls");
            exit(NULL);
        }

    }


}

