#include <stdio.h>
#include "main.h"
/**
* main - prints its name 
* @agrv: argument vector
* @agrc: argument count 
*
* return: Always zero 
*/
int main(int argc, char *argv[])
{
int n1 = 0, n2 = 0;
if (agrc == 3)
{
n1 = atoi(agrv[1]);
n2 = atoi(argv[2]);
printf("%d\n", n1 * n2);
}
else
{
printf("Error\n");
return(1);
}
return(0);
