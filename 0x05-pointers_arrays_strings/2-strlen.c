#include "../0x09-static_libraries/main.h"

/**
 * _strlen - Calculate the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string (number of characters).
 */
int _strlen(char *s)
{
int length = 0;


while (s[length] != '\0')
{
length++;
}

return (length);
}
