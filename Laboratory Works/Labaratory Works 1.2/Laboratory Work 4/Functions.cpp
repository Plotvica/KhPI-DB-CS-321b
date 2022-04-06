#include"HeaderOfFunctions.h"



void print_array(int* pointer, int size) {
	for (int i = 0; i < size; i++) {
		pointer[i] = rand() % 10;
		cout << pointer[i] << setw(4);
	} cout << endl;
}

void task(int* basicArray, int size) {
	
	cout << endl << "\t\t\tTask" << endl;
	int flag = 0;
	int max = INT_MIN, min = INT_MAX;
	for (int i = 0; i < size; i++) {
		if (basicArray[i] > max)
			max = basicArray[i];
	} cout << "MAX: " << max << endl;

	for (int i = 0; i < size; i++) {
		if (basicArray[i] < min)
			min = basicArray[i];
	} cout << "MIN: " << min << endl;
	if (min != 0) {
		cout << "Ratio: " << double(max) / double(min) << endl;
	}
	else {
		cout << "ERROR!" << setw(8);
		cout << "The ratio of the maximum element to the minimum can`t be found!" << endl;
	}




	for (int i = 0; i < size; i++) {
		if (basicArray[i] == max) {
			flag++;
		}
		else if (basicArray[i] == min) {
			flag++;
		}
	}

	int* newArray = new int[size - flag];


	cout << "New array:" << endl;
	for (int i = 0, j = 0; i < size; i++) {
		if (basicArray[i] > min && basicArray[i] < max) {
			newArray[j] = basicArray[i];
			cout << setw(4) << newArray[j];
			j++;
		}
	} cout << endl;
}