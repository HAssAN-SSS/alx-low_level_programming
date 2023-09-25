#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - gets the length of a prefix substring
 * @s: string
 * @accept: string
 *
 * Return: number of bytes in the initial segment of s
 */

char *_strpbrk(char *s, char *accept)
{

char *result;
result = strpbrk(s, accept);
return (result);
}
