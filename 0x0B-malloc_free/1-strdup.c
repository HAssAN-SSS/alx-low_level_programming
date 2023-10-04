#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *    which contains a copy of the string given as a parameter.
 * @str: The string to be copied.
 * Return: A pointer to the newly allocated space in memory
*/
char *_strdup(char *str)
{
int i;
char *ptr;
if (str == NULL)
{
return (NULL);
}
else
{
ptr = malloc(strlen(str) + 1);
if (ptr == NULL)
{
return (NULL);
}
else
{
for (i = 0; str[i] != '\0'; i++)
{
ptr[i] = str[i];
}
return (ptr);
}
}
}
