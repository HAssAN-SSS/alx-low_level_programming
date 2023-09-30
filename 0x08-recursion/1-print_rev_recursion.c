#include <string.h>
#include <stdio.h>
/**
 * _puts_recursion - prints a string
 * @s: string
 * Return: void
 */
void _puts_recursion(char *s)
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
