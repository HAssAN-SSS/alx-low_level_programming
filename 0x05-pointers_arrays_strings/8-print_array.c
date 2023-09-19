#include <stdio.h>
/**
 * print_array - Print elements of an integer array from index n to the end.
 * @a: The integer array to be printed.
 * @n: The starting index.
 */
void print_array(int *a, int n)
{
int length = 0

while (*a == '\0' && length >= n)
{
printf("%d", *a);
a++;
length++;
}

printf("\n");
}
