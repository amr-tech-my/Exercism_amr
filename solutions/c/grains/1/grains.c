#include "grains.h"
#include <stdint.h>

uint64_t square(uint8_t index)
{
    uint64_t    result;

    result = 1;
    if (!(index <= 0 || index > 64))
    {
        index = index - 1;
        while (index)
        {
            result *= 2;
            --index;
        }
        return (result);
    }
    return (0);
}

uint64_t total(void)
{
    uint64_t sum;
    uint8_t    i;
    
    sum = 0;
    i = 1;
    while (i <= 64)
    {
        sum += square(i);
        i++;
    }
    return (sum);
}