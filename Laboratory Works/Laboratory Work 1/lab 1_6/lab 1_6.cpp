#include <iostream>

int main()
{
    time_t now = time(0);

         long long formula = 60 * 60 * 24 * 365;
         long long leap_year = 60 * 60 * 24 * 365.25;


     long long thousand = 1000 * formula + (1000/4)*leap_year - (1000/4) * formula;
     long long  hundred = 100 * formula + (100 / 4) * leap_year - (100 / 4) * formula;

    /* 3.154e+7 per year
    long long thousand = 1000 * (3.154e+7);
    long long hundred = 100 * (3.154e+7); */
}

