#include <stdio.h>
#include <string.h>
#include "../0x09-static_libraries/main.h"


/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string
 *
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
size_t result;
result = strspn(s, accept);
return (result);
}
