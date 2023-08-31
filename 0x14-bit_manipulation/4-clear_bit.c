#include "main.h"

/**
* clear_bit - sets to 0
* @n: pointer
* @index: index to clear
*
* Return: 1 for ok, -1 for malfunc
*/
int clear_bit(unsigned long int *n, unsigned int index)

{

if (index > 63)

return (-1);


*n = (~(1UL << index) & *n);

return (1);

}
