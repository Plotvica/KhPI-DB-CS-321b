#include "HeadsOfFunctions.h"

int main() {

    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    Details det[4];


    //menu system 
    int menu_button;
    while (true) {
       
#ifdef DEBUG
        cout << __DATE__ << endl;
        cout << __TIME__ << endl;
#else 
        cout << __func__ << endl;
        cout << __FILE__ << endl;
#endif

        cout << " 1 - Ввод 2 – сортировка, 3 – печать, 0 - завершить роботу ";
        cin >> menu_button;

        if (menu_button == 1) {

#ifndef PRINT_TYPE 
            in_put(det);
#else 
            random(det);
#endif
        }
        else if (menu_button == 2) {
            sort(det);
            
        }
        else if (menu_button == 3) {
            system("cls");
            print(det);
            
        }
        else if (menu_button == 0) {
            exit(0);
        }

    }



    return 0;
}