#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: The number of parameters passed to the function
 * @...: A variable number of parameters to calculate the sum of
 * Return: The sum of all parameters
*/


int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
int i = 0;
va_list args;
if (n == 0)
{
return (0);
}
else
{
while (i < n)
{
sum += va_arg(args, int);
i++;
}
return (sum);
}
}
