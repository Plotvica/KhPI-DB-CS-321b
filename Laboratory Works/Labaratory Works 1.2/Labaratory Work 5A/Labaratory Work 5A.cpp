﻿#include"HeaderOfFunctions.h"

int main()
{
	//srand(time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int size;

	cout << "INPUT COL*ROW ";	
	cin >> size;

	int** Two_D_Array = new int* [size];
	for (size_t i = 0; i < size; i++) {
		*(Two_D_Array + i) = new int[size];
	}

	int* Min_Array = new int[size];
	int* Max_Array = new int[size];

	int summa = 0;
	int multiplication = 1;
	Task( Two_D_Array,  Min_Array,  Max_Array, &summa, &multiplication, size);

	// free space
	delete[] Min_Array;
	delete[] Max_Array;
	for (size_t i = 0; i < size; i++) {
		delete[] Two_D_Array[i];
	}	delete[] Two_D_Array;



}

