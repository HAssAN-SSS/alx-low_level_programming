#include <stdio.h>
#include <string.h>
/**
 * _pow_recursion - returns the factorial of a given number
 * @x: number to find the factorial of
 * @y: number to find the factorial of
 * Return: factorial of n
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else
{
if (y == 1)
{
return (x);
}
return (x * _pow_recursion(x, y - 1));
}
}
