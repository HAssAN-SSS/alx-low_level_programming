#include <stdio.h>
#include <string.h>
/**
 * _strncat - Concatenates two strings.
 * @dest: The string to be appended to.
 * @src: The string to be appended.
 * @n: The number of bytes to be appended.
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
return (strncat(dest, src, n));
}
