#include <stdio.h>
#include <string.h>
/**
 * _sqrt_recursion - returns the factorial of a given number
 * @n: number to find the factorial of
 * Return: factorial of n
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else
{
if (n == 0)
{
return (0);
}
else
{
if (n == 1)
{
return (1);
}
else
{
return (_sqrt_recursion(n / (n - 1)));
}
}
}
}
