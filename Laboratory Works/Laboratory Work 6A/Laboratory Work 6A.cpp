#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h";
#include <time.h>;
using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand(time(NULL));
    int bot_num = rand() % 100 + 1;

    int win, lost, user_num, attempts=0;

	printf("Угадай число!\n");

    do {
			attempts++;
        	scanf("%i", &user_num);           
    	if (user_num > bot_num) {
    		printf("Этот число больше моего.\n");
            printf("Попробуй еще раз.\n");
    	} 
    	else if (user_num < bot_num) {
			printf("Этот число меньше моего.\n");
            printf("Попробуй еще раз.\n");
    	}
    	else {
			printf("Поздравляю, ты угадал!");
            printf("Это было %i \n\n", bot_num);
    	}

    } while(user_num!=bot_num);


   	printf("Количество попыток:%i\n\n\n", attempts);


return 0;
}


