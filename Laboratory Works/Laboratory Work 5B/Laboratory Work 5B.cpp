#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h";
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    while (true) {

     double count;
      printf("Сколько у тебя грибов?");
        scanf("%lg", &count);

        if ( (float)count - (int)count == 0  && count > 0) {
            printf("У меня %lg грибов!\n\n\n", count);
        }
      else
          printf("Ты ешь грибы!\n\n\n", count);

    }


  return 0;
}
