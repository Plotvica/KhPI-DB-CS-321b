#include "HeadsOfFunctions.h"


void First_part(int* array_1) {

    FILE* file1;
    file1 = fopen("data1.txt", "w");



    for (int i = 0;i < size;i++) {
        fprintf(file1, "%2d", *(array_1 + i));
        fprintf(file1, "\t");
    }

    cout << "The first array is:" << endl;
    for (int i = 0; i < size; i++) {
        cout << *(array_1 + i) << "\t";
    }
    fclose(file1);

}
void Second_part(int* array_1, int* array_2) {

    cout << endl;
    cout << "The second array is:" << endl;
    FILE* file1;
    FILE* file2;
    file1 = fopen("data1.txt", "r");
    file2 = fopen("data2.txt", "w");


    for (int i = 0; i < size;i++) {

        fscanf(file1, "%2d", &*(array_2 + i));
        fprintf(file2, "%2d", *(array_2 + i));
        fprintf(file2, "\t");
    }

    rewind(file1);
    for (int i = 0; i < size;i++) {
        fscanf(file1, "%2d", &*(array_2 + i));
        cout << *(array_2 + i) << "\t";
    }

    fclose(file1);
    fclose(file2);
}
void Third_part(int* array_1, int* array_2) {

    cout << endl;
    FILE* file2;
    int x;
    cout << "Rewrite all data to x variabel: " << endl;
    file2 = fopen("data2.txt", "r");

    fprintf(file2, "\n");
    for (int i = 0; i < size; i++) {
        fscanf(file2, "%d", &x);
        fprintf(file2, "%d", x);
        cout << x << "\t";
    }

    fclose(file2);
}