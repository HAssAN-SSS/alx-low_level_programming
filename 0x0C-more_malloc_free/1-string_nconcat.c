#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string to be concatenated.
 * @s2: The second string to be concatenated.
 * @n: The number of bytes to be concatenated.
 * Return: A pointer to the resulting string.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n);
void addtoStr(char *chunk, char *s, unsigned int n, int start);

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;


str = malloc(strlen(s1) + n + 1);
if (s1 != NULL)
{

addtoStr(str, s1, strlen(s1), 0);
if (s2 != NULL)
{
if (strlen(s2) >= n)
{
addtoStr(str, s2, n, strlen(s1));

}
else
{
addtoStr(str, s2, strlen(s2), strlen(s1));
}

}

}
else
{
if (s2 != NULL)
{
if (strlen(s2) >= n)
{
addtoStr(str, s2, n, 0);

}
else
{
addtoStr(str, s2, strlen(s2), 0);
}

}

}

return (str);
}

/**
 * addtoStr - Concatenates two strings.
 * @s: The first string to be concatenated.
 * @chunk: The second string to be concatenated.
 * @n: The number of bytes to be concatenated.
 * @start: khsfgfjsdfsdf dfkjh.
 * Return: A pointer to the resulting string.
*/

void addtoStr(char *chunk, char *s, unsigned int n, int start)
{
unsigned int i = 0;
for (i = 0; i < n; i++)
{
chunk[start + i] = s[i];

}
}



