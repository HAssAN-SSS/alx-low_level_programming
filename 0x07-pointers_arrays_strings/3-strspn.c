#include <stdio.h>
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string
 *
 * Return: number of bytes in the initial segment of s
 */

int _strspn(char *s, char *accept)
{
int *result;
result = strspn(s, accept);
return (result);
}
