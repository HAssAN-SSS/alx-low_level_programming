#include <stdio.h>
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string
 *
 * Return: number of bytes in the initial segment of s
 */
size_t _strspn(const char *s, const char *accept)
{
size_t result;
result = strspn(s, accept);
return (result);
}
