#include <stdio.h>
#include <string.h>
#include "../0x09-static_libraries/main.h"

/**
 * _strncpy - Copy a string from source to destination.
 * @dest: The destination buffer.
 * @src: The source string to be copied.
 * @n: The number of bytes to be copied.
 * Return: A pointer to the destination buffer.
 */
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
