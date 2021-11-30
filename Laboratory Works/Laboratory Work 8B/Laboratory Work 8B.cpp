#include <iostream>
#include <algorithm> 
#include <iomanip>
#include <string>
using namespace std;

int main()
{

    int arr_size;
    cout << "Let`s create an array.";
    cout << "How many element`s do you need? ";
    while (true) {
       cin >> arr_size;
       if (cin.fail()) {
           cin.clear();
           cin.ignore(1000, '\n');
           cout << "Invalid value! Pease try againg. ";
       }
       else break;
    }

    int *arr = new int[arr_size];

    int k; // num of elemnts that we add or del
    int i; // index of first array
    int j; // index of second array

    // random created array
    cout << "Your array:" << endl;
    for ( i = 0; i < arr_size; i++) {
        arr[i] = rand() % 10 + 1;
        cout << arr[i] << setw(4);
    }
    cout << endl;

    // to do qu
    string answer;
    string del_new("del");
    string add_new("add");
    while (true) {

        cout << "Do you want to delete element`s or add some new? <del/add> ";
        //cin >> answer;
        while (true) {
                cin >> answer;
                if (answer != del_new and answer != add_new ) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Invalid input! Pease try againg. ";
                }
                else break;
            }

        // add k elements
        if (answer == add_new) {
            // input 
            int pos;
            cout << "How many elements do you want to add? ";
            while (true) {
                cin >> k;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Invalid value! Pease try againg. ";
                }
                else break;
            }

            cout << "Choose the position where you want to add " << k << " elements ";
            while (true) {
                cin >> pos;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Invalid value! Pease try againg. ";
                }
                else break;
            }

            if (pos < 1 or pos > arr_size) {
                cout << "Error! You let the arry`s limit out." << endl;
            }

            // add loops
            else {
                int *add_new_arr = new int[arr_size + k];

                for (i = 0; i < pos; i++) {
                    add_new_arr[i] = arr[i];
                }

                int *add_elements = new int[k];

                cout << "New elements: ";
                for ( j = 0; j < k; j++) {
                    add_elements[j] = rand() % 10 + 1;
                    cout << add_elements[j] << setw(4);
                }
                cout << endl;

                for ( j = 0, i = pos; i < arr_size + k; i++, j++) {
                    add_new_arr[i] = add_elements[j];
                }

                for ( j = pos + k, i = pos; j < arr_size + k; j++, i++) {
                    add_new_arr[i + k] = arr[i];
                }

                // new array
                cout << "Your new array:" << endl;
                for (i = 0; i < arr_size + k; i++) {
                    cout << add_new_arr[i] << setw(4);
                }
                cout << endl;
            }
        }
        // del k elements
        else if (answer == del_new) {

            // input 
            cout << "How many elements do you want to delete(left to right)? ";
            while (true) {
                cin >> k;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Invalid value! Pease try againg. ";
                }
                else break;
            }

            cout << "Choose the position where you want to delete " << k << " elements ";
            while (true) {
                cin >> i;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Invalid value! Pease try againg. ";
                }
                else break;
            }

            // delet loop
            if (i + k > arr_size or i < 0 or i > arr_size) {
                cout << "Error! You let the array`s limit out." << endl;
            }

            else if (arr_size == k and i == 0) {
                cout << "Array has been deleted!" << endl;
            }

            else {

                for (; i < arr_size - k; i++) {
                    arr[i] = arr[i + k];
                }

                // new array
                cout << "Your new array:" << endl;
                for (i = 0; i < arr_size - k; i++) {
                    cout << arr[i] << setw(4);
                }
                cout << endl;
            }
        }
        cout << endl;
        cout << "Your first array:" << endl;
        for (int i = 0; i < arr_size; i++) {
            //arr[i] = rand() % 10 + 1; // create another one with other elements 
            cout << arr[i] << setw(4);
        }
        cout << endl;
    }
    return 0;
}

