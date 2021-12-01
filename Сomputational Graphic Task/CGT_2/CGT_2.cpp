#include<iostream> 
#include<ctime>
#include<cmath>
#include<iomanip>
#include <chrono>
#define M 100
using namespace std;


void Shell(int arr[], int size)
{
    int d = size / 2;

    while (d > 0)
    {
        for (int i = 0; i < size - d; i++)
        {
            int j = i;
            while (j >= 0 && arr[j] > arr[j + d])
            {
                int temp = arr[j];
                arr[j] = arr[j + d];
                arr[j + d] = temp;
                j--;
            }
        }
        d = d / 2;
    }
}


int main()
{
    while (true) {

        cout.setf(ios::fixed);
        cout.precision(9); // seconds

        cout << "Shuttle sort" << endl;
        int size;
        cout << "Input array size: ";
        cin >> size;

        int arr[1000];

        cout << "Unsorted array:" << endl;
        for (int i = 0; i < size; i++) {

           //arr[i] = rand() % 10 + 1;
           arr[i] = i;
           cout << setw(3) << arr[i];

        }

        double dur_arr[M];
        double aver_dur = 0;
        for (int i = 0; i < M; i++)
        {
            
            auto start = chrono::high_resolution_clock::now();
        
            Shell(arr, size);

            auto end = chrono::high_resolution_clock::now();
            chrono::duration<double> duration = end - start;

            dur_arr[i] = duration.count();
        }


        cout << "\nSorted array:" << endl;
        for (int i = 0; i < size; i++) {
             cout << setw(3) << arr[i];
        }

        for (int i = 0; i < M; i++){
            cout << "\nDuration "<< i << " = " << dur_arr[i] << "s\n";
            if(i > 0)aver_dur += dur_arr[i];
        }

        // time sort
        int j, i, temp;
        for (i = 1; i < M; i++) {

            j = i - 1;

            while (j >= 0) {

                if (dur_arr[j] > dur_arr[j + 1]) {
                    temp = dur_arr[j];
                    dur_arr[j] = dur_arr[j + 1];
                    dur_arr[j + 1] = temp;
                    j--;
                }
                else break;
            }
        }

        for (i = ((M/100)*20); i < M - ((M/100)*20)  ; ++i){
            if(i > 0)aver_dur += dur_arr[i];         
        } aver_dur = aver_dur / ((M/100)*60);

        cout << "\nThe time:" << aver_dur << "s\n\n";
   
  
    }

    //system("pause");
    return 0;
}