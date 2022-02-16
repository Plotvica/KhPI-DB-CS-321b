#include <iostream>
#include <iostream>
#include <algorithm> 
#include <iomanip>
#include <time.h>
using namespace std;
#define def_size 100


int array_print(int arr[def_size][def_size], int i_size, int j_size ){

        for ( int i = 0; i < i_size; ++i) {
            for ( int j = 0; j < j_size; ++j){
                arr[i][j] = rand() % 10 - 5;
                cout << setw(3) << arr[i][j];
            } 
            cout << endl;
        }
        return 0;
}

int positive(int arr[def_size][def_size], int choose, int j_size){
    int sum = 0;
    cout << "Positive numbers:" << endl;
    for (int j = 0; j < j_size; ++j) {

        if (arr[choose-1][j] >= 0) {
            cout << setw(3) << arr[choose-1][j];
            sum++;
        }
    } cout << endl;
    return sum;
}

int main()
{
    srand(time(NULL));
    

        // 2D array 
        int matrix[def_size][def_size];
        cout << "2D Array:" << endl;
        int i_size, j_size;
        cout << "Input number of rows ";
        cin >> i_size;
        cout << "Input number of columns ";
        cin >> j_size;

        // funciton  array_print
        array_print(matrix, i_size, j_size);

        while (true) {
        // chek positive 
        int choose;
        cout << "What row do you want to check? ";
        cin >> choose;

        
        if (choose > 0 && choose <= i_size) {
            cout << "Num of positive: " << positive(matrix, choose, i_size) << endl;
        }
        else
            cout << "This row dosen`t exist!" << endl;  
    }

    return 0;
}
