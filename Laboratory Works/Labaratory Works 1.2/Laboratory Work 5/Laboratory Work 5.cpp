#include"HeaderOfFunctions.h"




int main()
{
	srand(time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	
    int size = 0;


    int menu_button;
    while (true) {

        cout << "1 – Task A, 2 - Task B, 3 - Input the size by size  0 - Exit ";
        cin >> menu_button;

        if (menu_button == 1) { // a array

            int* basicArray = new int[size * size];

            system("cls");

            cout << "By 1D Array" << endl;
            print_array_A(task_A(basicArray, size), size);
			// free space
            delete[] basicArray;

        }
        if (menu_button == 2) { // b array
		
            int** Two_D_Array = new int* [size];
            for (size_t i = 0; i < size; i++) {
                *(Two_D_Array + i) = new int[size];
            }

            system("cls");

            cout << "By 2D Array" << endl;
            print_array_B(task_B(Two_D_Array, size), size);
			// free space
            for (size_t i = 0; i < size; i++) {
                delete[] Two_D_Array[i];
            }	delete[] Two_D_Array;


        }
        if (menu_button == 3) {
            system("cls");
            cout << "put the size of array" << endl;
            cin >> size;
        }
        if (menu_button == 0) {
            system("cls");
            exit(NULL);
        }

    }
	
	
	

    
}


