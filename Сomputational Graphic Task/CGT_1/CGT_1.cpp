#include<iostream> 
#include<ctime>
#include<cmath>
#include<iomanip>
#include <chrono>
#define M 100
using namespace std;


int Shuttle(int arr[], int size)
{
    int j, i, temp;

    for (i = 1; i < size; i++) {

        j = i - 1;

        while (j >= 0) {

            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                j--;
            }
            else break;
        }
    }
    return arr[size];
}

int Shell(int arr[], int size)
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
    return arr[size];
}


int main()
{
    while (true) {

        cout.setf(ios::fixed);
        cout.precision(7); // seconds

        cout << "Shuttle sort" << endl;
        int size;
        cout << "Input array size: ";
        cin >> size;

        int arr[1000];

        cout << "Unsorted array:" << endl;
        for (int i = 0; i < size; i++) {

            arr[i] = rand() % 10 + 1;
            //arr[i] = i;
            cout << setw(3) << arr[i];

        }

        int prep_arr[100];
        for (int i = 0; i < size; ++i) {
            prep_arr[i] = arr[i];
            // cout << setw(3) << arr[i];
        }

        double dur_arr[M];
        double aver_dur = 0;
        for (int i = 0; i < M; i++)
        {

            auto start = chrono::high_resolution_clock::now();

            Shuttle(arr, size);
            //Shell(arr, size);

            auto end = chrono::high_resolution_clock::now();
            chrono::duration<double> duration = end - start;

            dur_arr[i] = duration.count();

            cout << "\nSorted array:" << endl;
            for (int i = 0; i < size; i++) {
                cout << setw(3) << arr[i];
            }

            //back array
            cout << endl;
            for (int i = 0; i < size; ++i) {
                arr[i] = prep_arr[i];
                cout << setw(3) << arr[i];
            }

        }

        ////back array
        //for (int i = 0; i < size; ++i) {
        //    arr[i] = prep_arr[i];
        //}

        /*cout << "\nSorted array:" << endl;
        for (int i = 0; i < size; i++) {
             cout << setw(3) << arr[i];
        }*/

        for (int i = 0; i < M; i++) {
            cout << "\nDuration " << i << " = " << dur_arr[i] << "s\n";
           // aver_dur += dur_arr[i];
        }

        // time sort
        double temp = 0;
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < M - i - 1; j++) {
                if (dur_arr[j] > dur_arr[j + 1]) {
                    temp = dur_arr[j];
                    dur_arr[j] = dur_arr[j + 1];
                    dur_arr[j + 1] = temp;
                }
            }
       }

        for (int i = 0; i < M; i++) {
            cout << "\nDuration test " << i << " = " << dur_arr[i] << "s\n";
            // aver_dur += dur_arr[i];
        }

        for (int i = ((M / 100) * 45); i < M - ((M / 100) * 45); ++i) {
            aver_dur += dur_arr[i];
        } aver_dur = aver_dur / ((M / 100) * 10);

        cout << "\nThe time:" << aver_dur << "s\n";


    }

    //system("pause");
    return 0;
}