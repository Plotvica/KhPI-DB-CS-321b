#include <iostream>
#include <string>
#include <typeinfo>
#include "windows.h";

using namespace std;

#define amount_of_elements 3


#define PRINT_TYPE
//#define DEBUG

struct Details {

    string name;
    char type;
    int count;
    float weight;

};

void in_put(Details det[]);
void random(Details det[]);
void sort(Details det[]);
void print(Details det[]);