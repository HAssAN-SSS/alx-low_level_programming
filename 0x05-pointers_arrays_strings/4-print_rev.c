/**
 * print_rev - Print a string in reverse followed by a newline.
 * @str: The input string to be printed in reverse.
 */
void print_rev(const char *str)
{
int length = strlen(str);


for (int i = length - 1; i >= 0; i--)
{
fputc(str[i], stdout);
}

fputc('\n', stdout);
}

