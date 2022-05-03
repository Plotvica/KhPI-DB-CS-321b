#include "HeadsOfFunctions.h"

int main() {

    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    FILE* data;
    
    //data = fopen("data.txt", "r"); // open for reading
    //data = fopen("data.txt", "r+"); // reading and add info
    //data = fopen("data.txt", "w"); // open for writing or rewriting
    //data = fopen("data.txt", "w+"); // open for writing and reading
    //data = fopen("data.txt", "a"); // adding new elements


    data = fopen("data.txt", "a+");

    Details det[4];


    //menu system 
    int menu_button;
    while (true) {

#ifdef DEBUG
        cout << __DATE__ << endl;
        cout << __TIME__ << endl;
#else 
       // cout << __func__ << endl;
       // cout << __FILE__ << endl;
#endif

        cout << " 1 - Ввод 2 – сортировка, 3 – печать, 0 - завершить роботу ";
        cin >> menu_button;

        if (menu_button == 1) {

//#ifndef PRINT_TYPE 
           in_put(det, data);
//#else 
            //random(det, data);
//#endif
        }
        else if (menu_button == 2) {
            sort(det, data);

        }
        else if (menu_button == 3) {
            system("cls");
            print(det, data);

        }
        else if (menu_button == 0) {
            fclose(data);
            exit(0);
        }

    }

    delete[] det[1].name;
    delete[] det[2].name;
    delete[] det[3].name;
    return 0;
}