#include <string.h>
#include <stdio.h>
#include "../0x09-static_libraries/main.h"


/**
 * _strchr - locate character in string
 * @s: string
 * @c: character
 *
 * Return: pointer to dest
 */

char *_strchr(char *s, char c)
{
char *result;
result = strchr(s, c);
return (result);
}
