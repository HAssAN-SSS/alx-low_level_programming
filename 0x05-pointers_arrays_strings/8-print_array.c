#include <stdio.h>
/**
 * print_array - Print elements of an integer array from index n to the end.
 * @a: The integer array to be printed.
 * @n: The starting index.
 */
void print_array(int *a, int n)
{
int i;

for (i = n; a[i] != '\0'; i++)
{
printf("%d", a[i]);

if (a[i + 1] != '\0')
{
printf(", ");
}
}

printf("\n");
}
