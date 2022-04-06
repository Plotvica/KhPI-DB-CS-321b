#include "HeaderOfFunctions.h"


#define SIZE 10
int main()
{
    

    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);



    int basicArray[SIZE];
    int newArray[SIZE];

    int menu_button;
    while (true) {

        cout << "1 – Feed randomly the array, 2 - Find the max and min, 3 – The ratio, 4 – Print basic array, 5 - New array 0 - Exit ";
        cin >> menu_button;

        if (menu_button == 1) {
            system("cls");
            randomArray(basicArray, SIZE);
        }
        if (menu_button == 2) {
            system("cls");
            cout << "MAX:" << max_element(basicArray, SIZE) << setw(6) << "MIN:" << min_element(basicArray, SIZE) << endl;
        }
        if (menu_button == 3) {
            system("cls");
            cout << "Ratio is: " << ratio(max_element(basicArray, SIZE), min_element(basicArray, SIZE)) << endl;
        }
        if (menu_button == 4) {
            system("cls");
            cout << "Basic array:  ";
            print_array(basicArray, SIZE);
        }
        if (menu_button == 5) {
            system("cls");
            cout << "New array:  ";
            new_array(basicArray, newArray, SIZE, max_element(basicArray, SIZE), min_element(basicArray, SIZE));
        }
        if (menu_button == 0) {
            exit(0);
        }

    }



}


