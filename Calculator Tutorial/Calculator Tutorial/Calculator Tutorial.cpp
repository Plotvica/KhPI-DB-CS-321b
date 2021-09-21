#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Додаток \"Калькулятор\""
        << endl;
    cout << "Будь-ласка введіть арифметичні операції за наступоною форомою: a+b | a-b | a*b | a/b"
        << endl;
    return 0;

}
