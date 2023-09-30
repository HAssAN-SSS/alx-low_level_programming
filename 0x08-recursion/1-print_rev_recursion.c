#include <string.h>
#include <stdio.h>
/**
 * _print_rev_recursion - prints a string
 * @s: string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
putchar('\0');
}
else
{
_print_rev_recursion(s + 1);
putchar(*s);
}
}