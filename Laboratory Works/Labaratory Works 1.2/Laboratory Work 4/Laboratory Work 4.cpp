#include"HeaderOfFunctions.h"



int main()
{
	srand(time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int size = 0;
	int* basicArray = new int[size];


    int menu_button;
    while (true) {

        cout << "1 – Choose the size of array, 2 - Print A array, 3 - Complite the task  0 - Exit ";
        cin >> menu_button;

        if (menu_button == 1) {
            system("cls");
            cout << "Input size: "; cin >> size;
        }
        if (menu_button == 2) {
            system("cls");
            cout << "A array:" << endl;
            print_array(basicArray, size);
        }
        if (menu_button == 3) {
            task(basicArray, size);
        }
        if (menu_button == 0) {
            exit(0);
        }

    }
}


