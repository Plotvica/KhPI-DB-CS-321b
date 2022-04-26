#include"HeaderOfFunctions.h"


bool char_equal(char* string1, char* string2) {
    for (; *string1 && toupper(*string1) == toupper(*string2); ++string1, ++string2);
    if (*string1 - *string2 == 0)
        return true;
}


bool length_equal(char* string1, char* string2) {
    if (strlen(string1) == strlen(string2))
        return true;
}