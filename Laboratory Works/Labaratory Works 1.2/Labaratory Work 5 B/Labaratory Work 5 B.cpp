#include <iostream>
#include "HeaderOfFunctions.h"

int main()
{
    

    while (true) {

        int size;
        cout << "SIZE: "; cin >> size;
        int* array = new int[size];

        char choose;
        cout << "+ or * ->  "; 
       
        cin >> choose;
           
       

        int (*ptr)(int*, int);
        if (choose == '+') {
            ptr = summ;
            cout << "Answer:" << ptr(array, size) << endl << endl;
        }
        else
        {
            ptr = mult;
            cout << "Answer:" << ptr(array, size) << endl << endl;
        }

        delete[] array;

    }



}

