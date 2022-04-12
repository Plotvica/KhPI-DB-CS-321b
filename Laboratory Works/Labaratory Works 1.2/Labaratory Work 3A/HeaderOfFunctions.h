#pragma once
#include <iostream>
#include <iomanip>
#include "windows.h"



using namespace std;





void print_array(int* pointer, const int size);// print function
void randomArray(int* pointer, const int size);// random set numbers for array
void a_task(int* pointer, int size);//а) относительный адрес;
void b_task(int* pointer, int size);//б) через абсолютный адрес;
void v_task(int* pointer, int size);//в) не использовать индексацию;
void g_task(int* pointer, int size);//г) через массив указателей;
void d_task(int* pointer, int size); //д) через указатель на указатель.
void e_task(int* pointer, int size, int* summ, int* flag);//е) оформить в виде функции с параметрами указателями.