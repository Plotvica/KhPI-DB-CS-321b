
#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h";
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    unsigned short d;
    unsigned short r;
    unsigned short a;

printf("Введите направление передачи (0 - 1) >");
  scanf("%hi",&d);

printf("Введите 1-й операнд (0 - 15) >");
  scanf("%hi",&r);

printf("Введите регистр адреса 2-го операнда (0 - 15) >");
  scanf("%hi",&a);

/*
    D - 1 bit - unsigned short - max 1 -  - >> 8 \  
    R - 4 bit - unsigned short - max 15 - mask (0xf) - >> 4 \
    A - 4 bit - unsigned short - max 15 - mask - (0xf) >> 0 \ 
*/

  unsigned int result;
//  result =  (1 & 0x7) << 13;
    result  =  1        << 13; 
    result |=  1        << 14;
    result |=  1        << 15;
    result |=  1        << 9;
    result |=  d        << 8; 
    result |= (r & 0xF) << 4; // 0xF 4 bits
    result |= (a & 0xF) << 0;
    
printf ("Формат команды загрузки/сохранения в вычислительной системе имеет вид:%04x\n\n", result);

//  E     3  F    F
//1110 0011 1111 1111


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


printf ("Введите формат загрузки/сохранения в вычислительной системе от 0 до 0xFF: ");
    scanf ("%x", &result);

    result  =  1        >> 13; 
    result |=  1        >> 14;
    result |=  1        >> 15;
    result |=  1        >> 9;
    result |=  d        >> 8; 
    result |= (r >> 4)  & 0xF; 
    result |= (a >> 0)  & 0xF;  

putchar('\n');
  printf("Hаправление передачи = %i\n",d);
  printf("1-й операнд = %i\n",r);
  printf("Pегистр адреса 2-го операнда = %i\n",a);
return 0;

    
}

