#include "leap.h"

bool    leap_year(int n)
{
    return (n % 400 == 0)
        || ((n % 4 == 0)
            && (n % 100 != 0));
}