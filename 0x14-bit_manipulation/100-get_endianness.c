#include "main.h"

/**
* get_endianness - checks if lil or huge
* Return: 0 for huge, 1 for lil
*/

int get_endianness(void)

{

unsigned int i = 1;

char *c = (char *) &i;

return (*c);

}
