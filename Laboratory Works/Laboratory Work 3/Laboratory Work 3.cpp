#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
#include "math.h"
using namespace std;

int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	/* параметры, которые вводятся */
	double x;
	/* параметры, которые задаются в программе */
	double a = 12.5, b = 1.3; // x!=-b a!=b a!=0
	double t1, t2;   /* результаты */
	double ax;       /* рабочая переменная */

	printf("Введите x>");
	scanf("%lf", &x);

	x != -b;

	ax = a - b;
	t1 = b/( ax*(a+x) ) - a/(ax*ax) * log((a+x)/(b+x));

	if ( x == -a || x == -b || ax == 0 ) {

		printf("Помилка\n", t1);

	}
	else {

		printf("t1 = %lg\n", t1);

	}

	ax = a * x ;
	t2 = (1 / a) * (log(tan(ax / 2)) - 1 / (sin(ax)));

	if ( (ax / 2) > -57.29 || (ax / 2) < 57.29 || tan(ax / 2) == 0 || sin(ax) == 0 || a == 0 || ax == 0) {

		printf("Помилка\n", t2);

	}
	else {

		printf("t1 = %lg\n", t2);

	}

	//ax = a * x;
	//t2 = (1/a)*(log(tan(ax/2))-1/(sin(ax)));

	//printf("t1 = %lg\n", t1);
	//printf("t2 = %lg\n", t2);

	return 0;
}
