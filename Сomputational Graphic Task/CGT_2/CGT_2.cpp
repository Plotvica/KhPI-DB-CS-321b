#include<iostream> 
#include<ctime>
#include<cmath>
#include<iomanip>
#include <chrono>
#define M 99999
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

        cout << "Shell sort" << endl;
        int size;
        cout << "Input array size: ";
        cin >> size;

        int arr[1000];

        cout << "Unsorted array:" << endl;
        for (int i = 0; i < size; i++) {

           arr[i] = rand() % 10 + 1;
          // arr[i] = i;
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

        for (int i = 0; i < M; i++)
        {
            if (i > 0) aver_dur += dur_arr[i];
        }


        cout << "\nThe time:" << aver_dur / (M - 1) << "s\n";
    }

    //system("pause");
    return 0;
}
