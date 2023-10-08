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

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int s1_len = (s1 != NULL) ? strlen(s1) : 0;
unsigned int s2_len = (s2 != NULL) ? strlen(s2) : 0;
unsigned int total_len = s1_len + ((n < s2_len) ? n : s2_len);

str = malloc(total_len + 1);

if (str == NULL)
return (NULL);
if (s1 != NULL)
str = strcat(str, s1);
if (n < s2_len && s2 != NULL)
str = strncat(str, s2, n);
else if (s2 != NULL)
str = strcat(str, s2);

return (str);
}
