#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h";
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x, y;
while (true) {

    printf ("\nВведіть координату х >");
        scanf ("%lf", &x);
    printf ("Введіть координату y >");
        scanf ("%lf", &y);

    printf("x=%6.3lf;  y=%6.3lf\n",x,y);

  if ( (y > -1) && (y < 1) && (y<abs(x)) && (y>-abs(x))   )
     printf("Точка не належить площині\n");
  else 
     printf("Точка належить площині\n");
 
}


  return 0;
}


