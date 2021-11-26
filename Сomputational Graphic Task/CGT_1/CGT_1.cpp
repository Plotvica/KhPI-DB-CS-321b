#include<iostream> 
#include<ctime>
#include<cmath>
#include<iomanip>

using namespace std;

void Shuttle( int arr[], int size )
{
    
    int j, i, temp;

    long double time1 = clock() / 1000.0;

    for (i = 1; i < size; i++) {    

        j = i - 1;

        while(j >= 0){

            if( arr[j] > arr[j + 1] ){ 

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                j--;

            }
            else break;

        }

    }


    long double time2 = clock() / 1000.0;

   
    cout << "Sorted array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << setw(3) << arr[i];
    } 

   /* for (auto i: arr) {
        cout << arr[i];
    } 
    cout << endl;*/

    cout << "\nTime : " << time2 - time1 << endl;
}


int main()
{
    while (true) {

        cout << "Shuttle sort" << endl;
        int size;
        cout << "Input array size: ";
        cin >> size;

        int arr[1000];

        cout << "Unsorted array:" << endl;
        for (int i = 0; i < size; i++){
            arr[i] = rand() % 10 + 1;
            cout << setw (3) <<  arr [i];
        } 
        cout << endl;

        Shuttle(arr, size);

    }


    system("pause");
    return 0;
}