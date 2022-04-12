#include "HeaderOfFunctions.h"


#define size 10
int main()
{

    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int A[size];

    randomArray(A, size);
    int e_summ = 0, e_flag = 0;

    int menu_button;
    while (true) {

        cout << "1 – A task, 2 - B task, 3 - V task, 4 – G task, 5 - D task, 6 - E task  0 - Exit ";
        cin >> menu_button;

        if (menu_button == 1) {
            system("cls");
            cout << "A task:" << endl;
            print_array(A, size);
            a_task(A, size);
        }
        if (menu_button == 2) {
            system("cls");
            cout << "B task:" << endl;
            print_array(A, size);
            b_task(A, size);
        }
        if (menu_button == 3) {
            system("cls");
            cout << "V task:" << endl;
            print_array(A, size);
            v_task(A, size);
        }
        if (menu_button == 4) {
            system("cls");
            cout << "G task:" << endl;
            print_array(A, size);
            g_task(A, size);
        }
        if (menu_button == 5) {
            system("cls");
            cout << "D task:" << endl;
            print_array(A, size);
            d_task(A, size);
        }
        if (menu_button == 6) {
            system("cls");
            cout << "E task:" << endl;
            print_array(A, size);
            e_task(A, size, &e_summ, &e_flag);
            e_summ = 0;
            e_flag = 0;
        }
        if (menu_button == 0) {
            system("cls");
            exit(NULL);
        }
    }
}