#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h";
#include <time.h>;
using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    printf("Тест на знание таблици умножения:\n");

	srand(time(NULL));
   // int random_num1 = rand() % 10 + 1;
   // int random_num2 = rand() % 10 + 1;
   //int question = random_num1*random_num2;

    int in_put_user_num, grade = 0, num_of_question;

    for (num_of_question = 1; num_of_question <= 10; num_of_question++) {

        int random_num1 = rand() % 10 + 1;
        int random_num2 = rand() % 10 + 1;
        int question = random_num1 * random_num2;

    	printf("%i): %i * %i\n", num_of_question, random_num1, random_num2);
        scanf ("%i", &in_put_user_num);

    	if(question!=in_put_user_num){
    		printf("Ошибка! Правильний ответ: %i\n", question);
    	} else 
    		grade++;
    }

	printf("Твой общий результат набранных баллов:%i\n", grade);

			

return 0;
}

