#include "main.h"
#include <unistd.h>
/**
* _putchar - writes c to stdout
* @c: The character to run
*
* Return: On 1.
* On error, -1 is returned, and err no is set.
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
