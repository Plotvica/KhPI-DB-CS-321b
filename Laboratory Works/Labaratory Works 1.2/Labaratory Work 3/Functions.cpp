#include "HeaderOfFunctions.h"

//#define DEBUG

void print_array(int *pointer, const int size) {
	for (int i = 0; i < size; i++) {
		cout << *(pointer + i) << setw(4);
	} cout << endl;
}


void randomArray(int *pointer, const int size) {  // random set numbers for array

#ifndef DEBUG
	for (int i = 0; i < size; i++) {
		*(pointer + i) = rand() % 41 - 20;

	}
#endif // !DEBUG

	

#ifdef DEBUG
	cout << "The main array is:";
	for (int i = 0; i < size; i++) {
		*(pointer + i) = rand() % 41 - 20;
		cout << setw(4) << pointer[i];
	} cout << endl;
#endif // DEBUG

	
}


int max_element(int *pointer, const int size) { // searching max

	int max = INT_MIN;

	// max el
	for (int i = 0; i < size; i++) {
		if (*(pointer+i) > max) {
			max = *(pointer + i);
		}
	}
	return max;	
}


int min_element(int *pointer, const int size) { // search min 

	int min = INT_MAX;

	//min el
	for (int i = 0; i < size; i++) {
		if (*(pointer + i) < min) {
			min = *(pointer + i);
		}
	}
	return min;
}


#define ZERO_CHECK
float ratio( int max, int min) { //   ratio of max to min
	
	cout << "MAX:" << max << setw(6) << "MIN:" << min << endl;

#ifdef ZERO_CHECK

	if (min == 0) {
		cout << "ERROR!" << setw(8);
		cout << "The ratio of the maximum element to the minimum can`t be found!" << endl;
	}
	else {
		float ratio = float(max) / float(min);
		return ratio;
	}
#else

		float ratio = float(max) / float(min);
		return ratio;	

#endif // ZERO_CHECK

}


// send results to new array
void new_array(int *pointer, int *newpointer, const int size, int max, int min) {
	
	for (int i = 0, j = 0; i < size; i++ ) {
		if (*(pointer + i) > min && *(pointer + i) < max) {
			*(newpointer + i) = *(pointer + i);
			cout << *(newpointer+i) << setw(4);
			j++;
		}
	} cout << endl;
}


