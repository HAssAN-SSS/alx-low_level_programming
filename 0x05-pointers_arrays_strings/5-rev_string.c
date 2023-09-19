#include <stdio.h>
/**
 * rev_string - Print a string in reverse followed by a newline.
 * @str: The input string to be printed in reverse.
 */
void rev_string(const char *str)
{
int length = 0;
int i;


while (str[length] != '\0')
{
length++;
}


for (i = length - 1; i >= 0; i--)
{
fputc(str[i], stdout);
}

}

