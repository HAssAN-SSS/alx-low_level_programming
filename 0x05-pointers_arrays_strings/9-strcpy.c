#include <stdio.h>
#include <string.h>
#include "../0x09-static_libraries/main.h"

/**
 * _strcpy - Copy a string from source to destination.
 * @dest: The destination buffer.
 * @src: The source string to be copied.
 * Return: A pointer to the destination buffer.
 */

char *_strcpy(char *dest, char *src)
{
strcpy(dest, src);

return (dest);
}
