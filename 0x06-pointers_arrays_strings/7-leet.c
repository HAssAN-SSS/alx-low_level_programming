#include <stdio.h>

/**
 * leet - Encodes a string into "1337".
 * @str: The input string to be encoded.
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
char *orig = str;
char leet_map[] = "AaEeOoTtLl";
char leet_replacement[] = "4433007711";
int i, j;

while (*str)
{
for (i = 0; leet_map[i]; i++)
{
if (*str == leet_map[i])
{
*str = leet_replacement[i];
break;
}
}
str++;
}

return (orig);
}
