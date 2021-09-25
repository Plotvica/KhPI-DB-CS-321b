#include <iostream>

int main()
{
    time_t now = time(0);

    long double formula = 60 * 60 * 24 * 365;
    long double leap_year = 60 * 60 * 24 * 365.25;


    long double thousand = 1000 * formula + (1000/4)*leap_year - (1000/4) * formula;
    long double hundred = 100 * formula + (100 / 4) * leap_year - (100 / 4) * formula;

    /* 3.154e+7 per year
    long double thousand = 1000 * (3.154e+7);
    long double hundred = 100 * (3.154e+7); */
}

