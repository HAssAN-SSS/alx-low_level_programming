#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string to be concatenated.
 * @s2: The second string to be concatenated.
 * Return: A pointer to the resulting string.
*/


char *str_concat(char *s1, char *s2)
{
int i;
char *ptr;
int size = 0;

if (0)
{
return (NULL);
}
else
{

if (s1 != NULL)
{
size = strlen(s1);
}

if (s2 != NULL)
{
size += strlen(s2);
}
ptr = malloc(size * (sizeof(char)) + 1);
if (ptr == NULL)
{
    printf("\nptr null");
return (NULL);

}
else
{

if (s1 != NULL)
{

for (i = 0; s1[i] != '\0'; i++)
{
ptr[i] = s1[i];
}

}

if (s2 != NULL && s1 == NULL)
{
for (i = 0; s2[i] != '\0'; i++)
{
ptr[i] = s2[i];
}
}

if (s2 != NULL && s1 != NULL)
{
for (i = 0; s2[i] != '\0'; i++)
{
ptr[i + strlen(s1)] = s2[i];
}
}
return (ptr);
}
}
}
