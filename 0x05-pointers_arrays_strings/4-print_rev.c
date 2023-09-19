/**
 * custom_reverse_puts - Print a string in reverse followed by a newline.
 * @str: The input string to be printed in reverse.
 */
void custom_reverse_puts(const char *str)
{
int length = 0;

while (str[length] != '\0')
{
length++;
}

for (int i = length - 1; i >= 0; i--)
{
putchar(str[i]);
}

putchar('\n');
}