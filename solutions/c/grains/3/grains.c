#include "grains.h"
#include <stdint.h>

uint64_t square(uint8_t index)
{
    uint64_t    result;
    uint8_t    count;
    
    if (index < 1 || index > 64)
        return (0);

    result = 1;
    count = 1;
        while (count < index)
        {
            result *= 2;
            ++count;
        }
    return (result);
}

uint64_t total(void)
{
    return (UINT64_MAX);
}