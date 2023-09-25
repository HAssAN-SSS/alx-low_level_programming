#include <string.h>
#include <stdio.h>
/**
 * _strchr - locate character in string
 *  - Returns a pointer to the first occurrence
 * of the character c in the string s,
 * or NULL if the character is not found
 *@s: string
 *@c: character
 */
char *_strchr(char *s, char c)
{
char *result;
result = strchr(s, c);
return (result);
}
