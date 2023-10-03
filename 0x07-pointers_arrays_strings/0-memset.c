#include <stdio.h>
#include <string.h>
#include "../0x09-static_libraries/main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area to be filled
 * @b: constant byte
 * @n: number of bytes to be filled
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
char *result;
result = memset(s, b, n);
return (result);
}
