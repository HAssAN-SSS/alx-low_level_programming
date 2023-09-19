#include <stdio.h>
/**
 * print_array - Print elements of an integer array from index n to the end.
 * @a: The integer array to be printed.
 * @n: The starting index.
 */
void print_array(int *a, int n)
{
int i;
while (*a == '\0')
{
printf("%d", *a);
a++;
}

printf("\n");
}
