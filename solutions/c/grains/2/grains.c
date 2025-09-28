#include "grains.h"
#include <stdint.h>

uint64_t square(uint8_t index)
{
    uint64_t    result;
    uint8_t    count;
    
    if (index <= 0 || index > 64)
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
    uint64_t sum;
	uint64_t grains;
	uint8_t i;

	sum = 0;
	grains = 1;
	i = 1;
	while (i <= 64)
	{
		sum += grains;
		grains *= 2;
		i++;
	}
	return sum;
}