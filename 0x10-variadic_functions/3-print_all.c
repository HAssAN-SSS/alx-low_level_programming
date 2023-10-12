#include "variadic_functions.h"
/**
 * print_all - print all
 * @format: format
 * @...: arguments
 * Returns: Nothing
*/


void print_all(const char * const format, ...)
{
va_list args;
va_start(args, format);
unsigned int n = strlen(format);
unsigned int i = 0;
while (i < n)
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, char));
break;

case 'i':
printf("%d", va_arg(args, int));
break;

case 'f':
printf("%d", va_arg(args, float));
break;

case 's':
printf("%s", va_arg(args, char *));
break;

default:
break;
}
i++;
if (i != n)
{
printf(", ");
}
}
}
