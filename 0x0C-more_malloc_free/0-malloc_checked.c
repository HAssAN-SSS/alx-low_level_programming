#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory
 * Return: pointer to memory
*/


void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
else
{
return (ptr);
}
}

