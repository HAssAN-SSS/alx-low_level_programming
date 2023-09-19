#include <stdio.h>
/**
* print_array - Print a string in reverse followed by a newline.
* @a: The input string to be printed in reverse.
* @n: The input string to be printed in reverse.
*/

void print_array(int *a, int n)
{
int length = 0;
int i;


while (a[length] != '\0')
{
length++;
}

for (i = n; i <= length - 1; i++)
{
putchar(a[i]);
}
putchar('\n');
}
