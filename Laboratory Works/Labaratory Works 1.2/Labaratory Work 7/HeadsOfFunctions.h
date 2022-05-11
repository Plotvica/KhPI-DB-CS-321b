#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <typeinfo>
#include "windows.h";

using namespace std;

#define amount_of_elements 3




struct Details {

    char* name = new char[15];
    char type;
    int count;
    float weight;

};


void input_backlist(Details det);
void random(Details det);
void print(Details det);
void print_all(Details det);
void listNumberPrint(Details det);
void input_forvardlist(Details det);
