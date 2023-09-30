#include <string.h>
#include <stdio.h>
/**
 * _puts_recursion - prints a string
 * @s: string
 * Return: void
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_puts_recursion(s);
*s--;
}
