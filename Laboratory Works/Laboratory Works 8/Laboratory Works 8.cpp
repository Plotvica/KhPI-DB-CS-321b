#include <iostream>
#include <math.h>
#include <iomanip>
#include <ctime>
#include <iostream>

#include "windows.h";
using namespace std;

//#define SIZE, 200;

int main()
{
    const int SIZE = 10; // array`s size
    
    srand(time(NULL));

    int i, pair = 0;
    int arr[SIZE];

    for (i = 0; i < SIZE; i++) { 
        arr[i] = rand ()%100 - 50;  // index e [-50;50]       
    }

    for (i=0;  i < SIZE; i++) {
        if (i < SIZE-1){ // SIZE-1 limit index
            if (arr[i] > 0 && arr[i+1] < 0  || arr[i] < 0 && arr[i+1] > 0) { 
                pair++;
            }
        }  
        cout << arr[i] << setw(4);  
    }
    // Console output
    cout << endl << "How many pairs do we have?" << pair << endl;

 return 0;
}

