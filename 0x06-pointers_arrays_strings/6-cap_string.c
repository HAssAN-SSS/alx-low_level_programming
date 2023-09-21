#include <stdio.h>
#include <string.h>
/**
 * *cap_string - Compare two strings.
 * @str:  is the number of elements of the array.
 * @*:  is the number of elements of the array.
 * Return: The difference between the two strings.
 */

char *cap_string(char *str)
{

int flag = 0;

str[0] = str[0] - ('a' - 'A');

while (*str != '\0')
{
if (*str < '0')
{
flag = 1;

}
if (*str >= 'a' && *str <= 'z' && flag == 2)
{
*str = *str - ('a' - 'A');
flag = 0;
}
str++;
if (flag == 1)
{
flag = 2;
}
else
{
flag = 0;
}
}


return (*str);
}
