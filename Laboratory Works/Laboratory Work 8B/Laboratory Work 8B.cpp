#include <iostream>
#include <algorithm> 
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    
    int arr_size; 
    cout << "Let`s crate an arry.";
    cout << "How many element`s do you need? ";
    cin >> arr_size;

    int *arr = new int[arr_size];
  
    // random created array
    cout << "Your array:" << endl;
    for (int i = 0; i < arr_size; i++){
        arr[i] = rand()%10 + 1;
        cout << arr[i] << setw (4);
    }
    cout << endl;

    // to do qu
    string answer;
    string del_new ("del");
    string add_new ("add");

    cout << "Do you whant to delete element`s or add some new? <del/add> ";
    cin >> answer;

    int k; // num of elemnts that we add or del
    int i; // index of array
    int pos_rep = 0; // position repeat of index

    // add k elements
    if (answer == add_new){
        // input 
        cout << "How many elements do you whant to add? ";
        cin >> k;
        cout << "Choose the position where you whant to add " << k << " elements ";
        cin >> i;


        int add_size = k;
        int *add_arr = new int[add_size + k];

        for (int i = 0; i < k; i++){
            arr[i] = rand()%10 + 1;
            cout << arr[i] << setw (4);
        }

        // add loop
        for (; i < arr_size - k; i++){
            add_arr [i] = arr [i];
        }

        for (int i = add_size; i > k; i--)
        {
            add_arr [i] = arr [i - k];
        }

        // new array
            cout << "Your new array:" << endl;
            for (i = 0; i < arr_size + k; i++) {
                cout << arr[i] << setw(4);
            }
            cout << endl;
    }
    // del k elements
    else if (answer == del_new){
        // input 
        cout << "How many elements do you whant to delete? ";
        cin >> k;
        cout << "Choose the position where you whant to delete " << k << " elements ";
        cin >> i;
        // delet loop
        if (i + k > arr_size) {
            cout << "Error. You let the arry`s limit." << endl;
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

    return 0;
}


