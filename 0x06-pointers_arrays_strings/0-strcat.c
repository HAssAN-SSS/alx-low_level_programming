#include <stdio.h>
#include <string.h>
#include "../0x09-static_libraries/main.h"


/**
 * _strcat - Concatenates two strings.
 * @dest: The string to be appended to.
 * @src: The string to be appended.
 * Return: A pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
return (strcat(dest, src));
}
