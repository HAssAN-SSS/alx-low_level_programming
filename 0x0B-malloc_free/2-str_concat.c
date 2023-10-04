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
if (s1 == NULL && s2 == NULL)
{
return (NULL);
}
else
{
ptr = malloc(strlen(s1) + strlen(s2) + 1);
if (ptr == NULL)
{
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
if (s2 != NULL)
{
for (i = 0; s2[i] != '\0'; i++)
{
ptr[i + strlen(s1)] = s2[i];
}

}
if (ptr == NULL)
{
return (NULL);
}
else
{
return (ptr);
}

}

}
}
