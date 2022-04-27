#include"HeaderOfFunctions.h"

int str(char* string) {

    int i;
    for (i = 0; *(string + i) != '\0'; i++);
        return i ;
}


bool char_equal(char* string1, char* string2) {

    bool flag = false;
    for (size_t i = 0; i < str(string1); i++) {
        if (*(string1 + i) >= 'a' and *(string1 + i) <= 'z')
            *(string1 + i) = (int)*(string1 + i) - 32;
        if (*(string2+i) >= 'a' and *(string2 + i) <= 'z')
            * (string2 + i )= (int)*(string2 + i) - 32;
    }

    for (size_t i = 0; i < str(string1); i++) {
        if (*(string1 + i) == *(string2 + i))
            flag = true; 
        else {
            flag = false;
            break;
        }
    }



    if (*string1 - *string2 == 0 && flag == true)
        return true;
}


bool length_equal(char* string1, char* string2) {
    if (str(string1) == str(string2))
        return true;

}