#include<iostream>
#include<vector>
#include <algorithm> 
#include <iomanip>
using namespace std;

int main()
{
    
    int input_user_num;
    int summa = 0;
    int arr_size = 0;
    int hash;


    cout << "Input your number:";
    cin >> input_user_num; 

   

    if (input_user_num > 0) {
        
        hash = input_user_num;

        do { 
            hash /=10;
            arr_size++;
        } while (hash > 0);


        int *arr = new int[arr_size];
        int i = 0;
        for (i = 0; i < arr_size; i++){
             arr[i] = (input_user_num % 10);
             input_user_num /=10;
             summa += arr[i]; 
        }
        cout << "Reversed number:";
                                    for (i = 0; i < arr_size; i++)
                                                                  cout << arr[i];
        cout << endl;
        cout << "Total sum:" << summa << endl;
        cout << "Total digits" << i << endl;
    } 
 
    else if (input_user_num <= 0) {
       cout << "Error" << endl;
       return 0;
    }
    return 0;
}
