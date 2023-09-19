#include <stdio.h>
/**
* rev_string - Print a string in reverse followed by a newline.
* @str: The input string to be printed in reverse.
*/
void rev_string(const char *str)
{
int length = 0;

int start = 0;

int end;

char temp;

while (str[length] != '\0')
{
length++;
}

end = length - 1;

while (start < end)
{
temp = str[start];
str[start] = str[end];
str[end] = temp;

start++;
end--;
}
}




