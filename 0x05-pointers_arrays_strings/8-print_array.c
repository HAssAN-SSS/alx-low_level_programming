#include <stdio.h>
/**
 * print_array - Print elements of an integer array from index n to the end.
 * @a: The integer array to be printed.
 * @n: The starting index.
 */
void print_array(int *a, int n)
{
int length = 0;
int i = 0;

while (a[length] != '\0')
{
length++;
}

while (*a != '\0')
{
if (length >= n && i < n)
{
printf("%d", *a);
if (i != length)
{
printf(", ");

}
}
a++;
i++;
}

printf("\n");
}
