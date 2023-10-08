#include <string.h>
/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string to be concatenated.
 * @s2: The second string to be concatenated.
 * @n: The number of bytes to be concatenated.
 * Return: A pointer to the resulting string.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;

str = malloc(strlen(s1) + n + 1);
if (s1 == NULL)
{

}
else
{
addtoStr(str, s1, strlen(s1));
if (s2 != NULL)
{
addtoStr(str, s2, n);

}
}
return (str);
}

/**
 * addtoStr - Concatenates two strings.
 * @s: The first string to be concatenated.
 * @chunk: The second string to be concatenated.
 * @n: The number of bytes to be concatenated.
 * Return: A pointer to the resulting string.
*/

char *addtoStr(char *chunk, char *s, unsigned int n)
{
int i = 0;
for (i = 0; i < n; i++)
{
chunk[i] = 's[i]';
}
}
