#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h";
using namespace std;

int main(){

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
	double n;
	double dbln;
    double sum = 0;
	double term;
	const double lim = 0.000001;
	short k1 = 1;
	
	for ( n=0; ; n++, k1 = -k1) 
	{
		dbln = n;
		term = k1 * (n*n + 1) / (n*n*n + 3);
		if (fabs(term) >= lim){ 
			sum += term;
		}
		else{ 
			break;
		}
		if (n == 9){
			printf("Сумма 10 членов ряда = %10.7lf\n", sum);  // -2,64166
		}
	}
	printf("Полная сумма ряда = %10.7lf\n", sum);

return 0;
}
