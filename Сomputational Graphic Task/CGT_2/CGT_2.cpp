#include<iostream> 
#include<ctime>
#include<cmath>


using namespace std;



void Shell(int arr[], int size)
{
    int d = size / 2;
    long double time1 = clock() / 1000.0;

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

    long double time2 = clock() / 1000.0;

    cout << "\nTime : " << time2 - time1 << endl;
}


int main()
{
    while (true) {

        int size;
        cout << "TEST ";
        cin >> size;

        int *arr = new int[size];

        for (int i = 0; i < size; i++){
            arr[i] = rand() % 10 + 1;
        }

        Shell(arr, size);

    }


    system("pause");
    return 0;
}
