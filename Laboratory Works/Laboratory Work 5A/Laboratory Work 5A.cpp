
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h";
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a;
    double b;
    double c;
    double arg;

    while (true) {

    printf("Введите коефициенты икса (a,b,c):");
    scanf("%lg %lg %lg", &a, &b, &c );

    double  D = sqrt(b * b - 4 * a * c);
        if ((b * b - 4 * a * c) >= 0) {
            arg = -1*b - D / (2 * a);
                printf ("Первый корень равен %lg\n", arg);
            arg = -1*b + D / (2 * a);
                printf ("Второй корень равен %lg", arg);
        }
        else{
            printf("Error");
        }

    printf("\n\n\n\n");

}
    return 0;
}

