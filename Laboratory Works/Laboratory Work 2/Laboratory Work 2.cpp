#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h";
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	

	/*char name1[11], name2[11], name3[11];
	char type1, type2, type3;
	int cnt1, cnt2, cnt3;
	float wei1, wei2, wei3;*/

	char name1[11] = "Фланць", name2[11] = "Перехідник", name3[11] = "Станина"; //strcpy(name1, "Тодайдзи");
	char type1 = 'О', type2 = 'П', type3 = 'З';
	int cnt1 = 3, cnt2 = 8, cnt3 = 1;
	float wei1 = 450, wei2 = 74, wei3 = 117050;

	 
	//printf("1. Введіть: назву, тип, кількість, вагу (г)  >"); // фланець З 3 450
	//scanf("%s %c %d %f", name1, &type1, &cnt1, &wei1);

	//printf("2. Введіть: назву, тип, кількість, вагу (г) > "); // перехідник П 8 74
	//scanf("%s %c %d %f", name2, &type2, &cnt2, &wei2);

	//printf("3. Введіть: назву, тип, кількість, вагу (г) >"); // станина О 1 117050
	//scanf("%s %c %d %f", name3, &type3, &cnt3, &wei3);



	printf("-------------------------------------------------\n");
	printf("|              Відомості деталей                |\n");
	printf("|-----------------------------------------------|\n");
	printf("|   Назва    |  Тип  |  Кількість | Вага однієї |\n");
	printf("|            |       |            |  деталі (г) |\n");
	printf("|------------|-------|------------|-------------|\n");
	
	printf("| %10s | %5c | %10d | %-11.1f |\n", name1, type1, cnt1, wei1);
	printf("| %10s | %5c | %10d | %-11.1f |\n", name2, type2, cnt2, wei2);
	printf("| %10s | %5c | %10d | %-11.1f |\n", name3, type3, cnt3, wei3);

	printf("|-----------------------------------------------|\n");
	printf("| Примітка: О - оригінальна; П - покупна;       |\n");
	printf("|             З - запозичена                    |\n");
	printf("-------------------------------------------------\n");

	return 0;
}
