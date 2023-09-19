#include <stdio.h>
/**
 * _puts - Print a string followed by a new line to stdout.
 * @str: The input string to be printed.
 */
void _puts(const char *str)
{
ssize_t count = 0;


while (str[count] != '\0')
{

if (write(1, &str[count], 1) == -1)
{
return (-1);
}
count++;
}

if (write(1, "\n", 1) == -1)
{
return (-1);
}
return (count);
}
