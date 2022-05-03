#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <typeinfo>
#include "windows.h";

using namespace std;

#define amount_of_elements 3


#define PRINT_TYPE
//#define DEBUG

struct Details {

    char *name = new char[20];
    char type;
    int count;
    float weight;

};

void in_put(Details det[], FILE* data);
void random(Details det[], FILE* data);
void sort(Details det[], FILE* data);
void print(Details det[], FILE* data);