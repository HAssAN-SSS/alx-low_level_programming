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


int start = 0;
int end = length - 1;
char temp:

while (start < end)
{
temp = str[start];
str[start] = str[end];
str[end] = temp;

start++;
end--;
}
}



