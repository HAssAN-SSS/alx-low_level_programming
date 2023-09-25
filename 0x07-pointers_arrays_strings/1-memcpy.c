#include <stdio.h>
#include <string.h>

/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *result;
result = memcpy(dest, src, n);
return (result);
}
