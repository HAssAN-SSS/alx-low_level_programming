#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * cap_string - Capitalize the first letter of each word in a string.
 * @str: The input string.
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
bool new_word = true;

while (*str != '\0')
{
if (*str >= 'a' && *str <= 'z')
{
if (new_word)
{
*str = *str - ('a' - 'A');
new_word = false;
}
}
else if (*str == ' ' || *str == '\t' || *str == '\n')
{
new_word = true;

str++;
}

return (str);
}
}
