#include"HeaderOfFunctions.h"



int main()
{
	srand(time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int size;
	cout << "Input size: "; cin >> size;
	int* basicArray = new int[size];
	print_array(basicArray, size);
	task(basicArray, size);


}


