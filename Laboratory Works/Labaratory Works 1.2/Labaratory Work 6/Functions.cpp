#include"HeaderOfFunctions.h"


bool char_equal(char* string1, char* string2) {

 
    for (size_t i = 0; i < strlen(string1); i++) {
        if (*(string1 + i) >= 'a' and *(string1 + i) <= 'z')
            *(string1 + i) = (int)*(string1 + i) - 32;
        if (*(string2+i) >= 'a' and *(string2 + i) <= 'z')
            * (string2 + i )= (int)*(string2 + i) - 32;
    }
    if (*string1 - *string2 == 0)
        return true;
}


bool length_equal(char* string1, char* string2) {
    if (strlen(string1) == strlen(string2))
        return true;
}