#include "variadic_functions.h"
/**
 * print_strings - Prints strings
 * @separator: The string to be printed between numbers
 * @n: Number of characters to print
 * Returns: Nothing
*/


void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list vsprint;

va_start(vsprint, n);

for (i = 0; i < n; i++)
{
str = va_arg(vsprint, char *);

if (separator != NULL && i > 0)
{
printf("%s", separator);
}

if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
}

va_end(vsprint);
putchar(10);
}

