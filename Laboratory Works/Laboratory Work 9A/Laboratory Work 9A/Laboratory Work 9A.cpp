#include<iostream>
#include <iomanip>
using namespace std;


int main()
{
	const int ROW = 5;
	const int COL = 5;
	
	int matrix[ROW][COL];

	cout << " ROW CHANGE" << endl;

	cout << "Basic Array:" << endl;
	for ( int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			matrix[i][j] = rand()%10 + 1;
			cout << setw(3) << matrix[i][j];
		}
		cout << endl;
	}

	int max = 0;
    int temp;

	// input

	for ( int i = 0; i < ROW; ++i) {
		for (int j = 0; j < COL; ++j) {
			if (matrix [i][j] >= matrix [i][max]){
				 max = j;
			}	
		}
		cout << endl << "In " << i + 1 << " row maximum is:"  << matrix [i][max];

		temp = matrix [i][0];
		matrix [i][0] = matrix [i][max];
		matrix [i][max] = temp;
		max = 0;
		cout << endl;
	}

	// output 
	//cout << " ROW CHANGE" << endl;
	for (int i = 0; i < ROW; ++i)
	{
		for (int j = 0; j < COL; ++j)
		{
			cout << setw(3) << matrix[i][j];
		}
		cout << endl;
	}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

cout << endl << " COL CHANGE" << endl;

cout << "Basic Array:" << endl;
	for ( int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			matrix[i][j] = rand()%10 + 1;
			cout << setw(3) << matrix[i][j];
		}
		cout << endl;
	}

	int min = 0;
	temp = 0;

	// input
	int i;
	for ( int j = 0; j < COL; ++j) {
		for ( i = 0; i < ROW; ++i) {
			if (matrix [i][j] <= matrix [min][j]){
				 min = i;
			}	
		}
		cout << endl << "In " << j + 1 << " col manimum is:"  << matrix [min][j];

		temp = matrix [ROW-1][j];
		matrix [ROW-1][j] = matrix [min][j];
		matrix [min][j] = temp;
		min = 0;
		cout << endl;
	}

	// output 
	//cout << " COL CHANGE" << endl;
	for (int i = 0; i < ROW; ++i)
	{
		for (int j = 0; j < COL; ++j)
		{
			cout << setw(3) << matrix[i][j];
		}
		cout << endl;
	}


	return 0;
}


