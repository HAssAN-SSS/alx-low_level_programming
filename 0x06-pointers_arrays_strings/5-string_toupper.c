#include <stdio.h>
#include <string.h>
/**
 * *string_toupper - Compare two strings.
 * @str:  is the number of elements of the array.
 * @*:  is the number of elements of the array.
 * Return: The difference between the two strings.
 */
char *string_toupper(char *str)
{
char *ptr = str;
while (*ptr)
{
if (*ptr >= 'a' && *ptr <= 'z')
{
*ptr = *ptr - ('a' - 'A');
}
ptr++;
}
return (str);
}

