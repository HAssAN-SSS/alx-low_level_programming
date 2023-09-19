#include <stdio.h>
/**
* puts2 - Print a string in reverse followed by a newline.
* @str: The input string to be printed in reverse.
*/
void puts2(char *str)
{
int i = 0;
while (*str != '\0')
{
if (i % 2 == 0)
{

putc(*str, stdout);


}
i++;
str++;
}
}
