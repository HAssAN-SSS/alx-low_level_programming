#include <stdio.h>
#include <string.h>
#include "../0x09-static_libraries/main.h"


/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: substring to search for
 *
 * Return: pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
char *result;
result = strstr(haystack, needle);
return (result);
}
