#include <iostream>
#include "Calculator.h"
#include <Windows.h>
using namespace std;

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    cout << "Додаток \"Калькулятор\""
        << endl;

    cout << "Привіт, у нас є декілька правил, прочитай перед користуванням!"
        << endl;
    cout << "1) Вводь данні лише за цією форомою  a + b | a - b | a * b | a / b"
        << endl;
    cout << "2) Дотримуйся математичних правил і не діли на 0!"
        << endl;
    cout << "3) Канкулятор підримує лише десятичні та цілі числа!"
        << endl;
    cout << "4) Не використовуй більш ніж дві арифметичній дії за один раз!"
        << endl;
   


    Calculator c;
    while (true)
    { 
        cin >> x >> oper >> y;
        if (oper == '/' && y == 0)
        {
            cout << "Порушувати правила математики заборонено!" 
                << endl;
            continue;
        }
        else
        {
            result = c.Calculate(x, oper, y);
        }
        cout << "Відповідь: " << result 
        << endl;
       
    }

    return 0;
}
