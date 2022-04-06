#pragma once
#include <iostream>
#include <iomanip>
#include "windows.h"

using namespace std;


void print_array(int *pointer, const int size);
void randomArray(int *pointer, const int size);// random set numbers for array
int max_element(int *pointer, const int size); // searching max
int min_element(int *pointer, const int size);// search min 
float ratio(int max, int min);//   ratio of max to min
void new_array(int *pointer, int* newpointer, const int size, int max, int min);// send results to new array