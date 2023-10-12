#include <stdarg.h>
#include <stdio.h>


/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: The number of parameters passed to the function
 * @...: A variable number of parameters to calculate the sum of
 * Return: The sum of all parameters
*/


int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i = 0;
va_list args;
if (n == 0)
{
return (0);
}
else
{
va_start(args, n);
while (i < n)
{
sum += va_arg(args, int);
i++;
}
return (sum);
}
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int sum;

sum = sum_them_all(2, 98, 1024);
printf("%d\n", sum);
sum = sum_them_all(4, 98, 1024, 402, -1024);
printf("%d\n", sum);
return (0);
}
