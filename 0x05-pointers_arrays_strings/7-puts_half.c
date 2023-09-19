#include <stdio.h>
/**
* puts_half - Print a string in reverse followed by a newline.
* @str: The input string to be printed in reverse.
*/
void puts_half(char *str)
{
int length = 0;
int i;


while (str[length] != '\0')
{
length++;
}

if (length % 2 == 0)
{
for (i = length / 2; i < length; i++)
{
putc(str[i], stdout);
}
}
else
{
for (i = (length + 1) / 2; i < length - 1; i++)
{
putc(str[i], stdout);
}
}
putc('\n', stdout);
}
