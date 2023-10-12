/**
 * print_all - print all
 * @format: format
 * @...: arguments
 * Returns: Nothing
*/
void print_all(const char * const format, ...)
{
int n = strlen(format);
int i = 0;
char *str = NULL;
va_list args;
va_start(args, format);
while (i < n)
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
printSpace(i, n);
break;
case 'i':
printf("%d", va_arg(args, int));
printSpace(i, n);
break;
case 'f':
printf("%f", va_arg(args, double));
printSpace(i, n);
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
{
printf("limon");
break;
}
printf("%s", str);
printSpace(i, n);
break;
default:
break;
}
i++;

}
printf("\n");
}

/**
 * printSpace - in mylif
 * @i: index
 * @n: format long
*/

void printSpace(int i, int n)
{
if (i < n - 1)
{
printf(", ");
}
}
