#include <stdio.h>
#include <string.h>
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
memset(s, b, n);
}
