#include"HeaderOfFunctions.h"

int main()
{

    while (true) {


        char* string1 = new char[100];
        char* string2 = new char[100];

        cout << "Your firs string:";
        cin >> string1;

        cout << "Your second string:";
        cin >> string2;



        if (length_equal(string1, string2) == true) {
            cout << "*The are equal ech other by length*" << endl;
        }
        else cout << "*The are not equal ech other  by length*" << endl;


        if (char_equal(string1, string2) == true) {
            cout << "*The are equal ech other by chars*" << endl;
        }
        else cout << "*The are not equal ech other by chars*" << endl;


        if (char_equal(string1, string2) == true and length_equal(string1, string2) == true) {
            cout << "\t\t\t\t\tThis is the same word!" << endl;
        } cout << endl;
        

        delete[] string1;
        delete[] string2;


        cout << "\n\n\n";
    }
}

