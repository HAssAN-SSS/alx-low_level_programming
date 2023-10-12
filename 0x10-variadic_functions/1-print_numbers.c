#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 * @...: An array of integers
 *
 * Return: Nothing
*/


void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
va_start(args, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));
if (i != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(args);

}