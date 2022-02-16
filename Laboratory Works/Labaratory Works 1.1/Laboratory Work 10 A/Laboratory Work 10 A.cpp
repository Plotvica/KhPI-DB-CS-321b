#include <iostream>
#include <iostream>
#include <algorithm> 
#include <iomanip>
using namespace std;

char comparison(int a, int b) {

	char rezult;
	if (a > b) {
		rezult = '>';
	}
	else if (a < b) {
		rezult = '<';
	}
	else {
		rezult = '=';
	};
	return rezult;

}


int main()
{

	while (true) {

		// input nums
		int a, b;
		cout << "Input first number: ";
		cin >> a;
		cout << "Input second number: ";
		cin >> b;

		// rezult
		cout << a << comparison(a, b) << b << endl;
		cout << "\n\n\n" << endl;

	}

}

