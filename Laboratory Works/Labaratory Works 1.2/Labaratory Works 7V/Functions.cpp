#include "HeadsOfFunctions.h"

#define size 20

void task() {

	FILE* data = fopen("data.bin","wb");

	int number;
	cout << "All nambers: ";
	for (int i = 0; i < size;i++) {
		number = rand() % 15 + 2;
		cout << setw(4) << number;
		fwrite(&number, sizeof(int), 1, data);
	} cout << endl;
	fclose(data);

	data = fopen("data.bin", "rb+");
	int hash;
	int summ = 0;

	cout << "2nd element is: ";
	fseek(data, sizeof(int), NULL);
	fread(&hash, sizeof(int), 1, data);
	cout << hash << endl;
	summ += hash;

	cout << "5th element is: ";
	fseek(data, 4*sizeof(int), NULL);
	fread(&hash, sizeof(int), 1, data);
	cout << hash << endl;
	summ += hash;

	cout << "9th element is: ";
	fseek(data, 8 * sizeof(int), NULL);
	fread(&hash, sizeof(int), 1, data);
	cout << hash << endl;
	summ += hash;

	cout << "Summ of 2nd, 5th and 9th is: " << summ << endl;



	cout << "Minimum is : ";
	int nnn = 999;
	int min = INT_MAX;
	int save_position;
	for (size_t i = 0, position = 0; i < size; i++, position++){

		fseek(data, position * sizeof(int), NULL);
		fread(&hash, sizeof(int), 1, data);
		if (min >= hash) {
			min = hash;
			save_position = position;
		}
	}
	cout << min << endl;
	fseek(data, save_position * sizeof(int), NULL);
	fwrite(&nnn, sizeof(int), 1, data);

	cout << "111111 : ";
	for (size_t i = 0, position = 0; i < size; i++, position++) {

		fseek(data, position * sizeof(int), NULL);
		fread(&hash, sizeof(int), 1, data);
		cout << setw(4) << hash;
	}


	fclose(data);

}