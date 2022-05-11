#include "HeadsOfFunctions.h"


void First_part(int* array_1) {

    FILE* data;
    data = fopen("data.txt", "wb");


    for (int i = 0;i < size;i++) {
        fwrite(array_1, sizeof(*array_1), size, data);

    }

    cout << "The first array is: " << endl;
    for (int i = 0; i < size; i++) {
        cout << *(array_1 + i) << "\t";
    }
    fclose(data);
}


void Second_part(int* array_1, int* array_2) {

    cout << endl;
    cout << "The second array is: " << endl;
    FILE* data;

    data = fopen("data.txt", "wb");


    fwrite(array_1, sizeof(*array_1), size, data);

    fclose(data);
    data = fopen("data.txt", "rb");



    for (int i = 0; i < size;i++) {
        fread(&*(array_2 + i), sizeof(int), size, data);
        cout << *(array_2 + i) << "\t";

    }
    fclose(data);
}


void Third_part(int* array_2, int* summ) {

    FILE* data;
    data = fopen("data.txt", "wb");

    fwrite(array_2, sizeof(*array_2), size, data);

    fclose(data);
    data = fopen("data.txt", "wb");


    for (int i = 0; i < size;i++) {
        fread(&*(array_2 + i), sizeof(int), size, data);
        if (*(array_2 + i) % 2 == 0) {
            *summ += *(array_2 + i);
        }

    }
    cout << endl;
    cout << "Summ of even numbers: " << endl;
    cout << *summ << endl;
    fclose(data);
}