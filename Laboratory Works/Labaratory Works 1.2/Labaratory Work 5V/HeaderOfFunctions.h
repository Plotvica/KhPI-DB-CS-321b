#pragma once
#include <iostream>
#include <iomanip>
#include "windows.h"



using namespace std;


void rand(int* pointer, const int size);
void print_array(int* pointer, const int size);
void Shell(int* array, int size);
void Shuttle(int* array, int size);
void BOBOLE(int* array, int size);
void sort( int* array, int size, void(*ptr)(int*, int));

