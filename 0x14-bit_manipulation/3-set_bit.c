#include "main.h"

/**
* set_bit - sets a bit index to 1
* @n: pointer
* @index: index of bit
*
* Return: 1 for ok, -1 for malfunc
*/

int set_bit(unsigned long int *n, unsigned int index)

{

if (index > 63)

return (-1);

*n = ((1UL << index) | *n);

return (1);

}

