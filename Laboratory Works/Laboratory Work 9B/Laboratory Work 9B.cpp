#include <iostream>
#include <algorithm> 
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    int matrix_A[100][100];
    int matrix_B[100][100];
    int res_matrix[100][100];

    int i_size_A, j_size_A;
    int i_size_B, j_size_B;
    while (true){
        // input
        cout << "What size do you whant to create matrix A ixj ";
        cin >> i_size_A >> j_size_A;
       // cout << i_size_A << setw (3) << j_size_A << endl;

        cout << "Matrix A:" << endl;
        for ( int i = 0; i < i_size_A; ++i) {
            for ( int j = 0; j < j_size_A; ++j){
                matrix_A[i][j] = rand() % 10 + 1;
                cout << setw(3) << matrix_A[i][j];
            } 
            cout << endl;
        }

        cout << "What size do you whant to create matrix B ixj ";
        cin >> i_size_B >> j_size_B;
        //cout << i_size_B << setw (3) << j_size_B << endl;

        cout << "Matrix B:" << endl;
        for (int i = 0; i < i_size_B; ++i) {
            for (int j = 0; j < j_size_B; ++j) {
                matrix_B[i][j] = rand() % 10 + 1;
                cout << setw(3) << matrix_B[i][j];
            } 
            cout << endl;
        }

        // matrixs` operation

        if (j_size_A == i_size_B){
            cout << "A * B:" << endl;
            // result output
            for (int i = 0; i < i_size_A; ++i) {
                for (int j = 0; j < j_size_B; ++j) {
                    res_matrix[i][j] = 0;
                    for (int f = 0; f < i_size_B; ++f) {
                        res_matrix[i][j] += matrix_A[i][f] * matrix_B[f][j];
                    }
                    cout << setw(6) << res_matrix[i][j];
                }
                cout << endl;
            }
        }

        else {
           cout << " A rows are not equal B columns!" << endl;
        }  

        cout << endl << endl << endl;
    }
  return 0;
}

