#include "HeadsOfFunctions.h"

int main() {

    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Details det;
    //menu system 
    int menu_button;
    while (true) {

        cout << " 1 - enter at the beginning of the sheet, 2 - enter at the end of the sheet, 3 - random, 4 - print all, 5 – print last three, 6 - by number 0 - exit ";
        cin >> menu_button;

        if (menu_button == 1) {
            system("cls");
            input_forvardlist(det);
        }
        if (menu_button == 2) {
            system("cls");
            input_backlist(det);
        }
        if (menu_button == 3) {
            system("cls");
            random(det);
        }
        if (menu_button == 4) {
            system("cls");
            print_all(det);
        }
        if (menu_button == 5) {
            system("cls");
            print(det);
        }
        if (menu_button == 6) {
            system("cls");
            listNumberPrint(det);
        }
        if (menu_button == 0) {
            delete [] det.name;
            exit(0);
        }

    }

    
    return 0;
}