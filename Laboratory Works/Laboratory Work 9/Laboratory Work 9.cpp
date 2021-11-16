#include <iostream>
#include <math.h>
#include <iomanip>
#include <ctime>
#include <string>
using namespace std;

int main()
{
   
    const int SIZE = 9;
    int arr[SIZE][SIZE];

    int k = 0;
    int i = 0;
    int j = 0;

    while (k < SIZE * SIZE) {

        arr[i][j] =  SIZE * SIZE - k  ;

        if (i <= j + 1 and i + j < SIZE - 1) {
            j++;
        }

        else if (i < j and i + j >= SIZE - 1) {
            i++;
        }

        else if (i >= j and i + j > SIZE - 1){
            j--;
        }

        else {
            i--;
        }

        k++;
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++){
            cout << setw(4) << arr[i][j];
        }
        cout << endl;
    }
 
    return 0;
}

