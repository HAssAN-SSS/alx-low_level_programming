#include <stdio.h>
#include "../0x09-static_libraries/main.h"


/**
 * _atoi - Convert a string to an integer.
 * @s: The input string.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1;

while (*s == ' ')
s++;

if (*s == '-')
{
sign = -1;
s++;
}
else if (*s == '+')
{
}

while (*s >= '0' && *s <= '9')
{
result = result * 10 + (*s - '0');
s++;
}

return ((result *sign));
}


