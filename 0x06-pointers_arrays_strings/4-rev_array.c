#include <stdio.h>
#include <string.h>
/**
 * reverse_array - Compare two strings.
 * @a: The array.
 * @n:  is the number of elements of the array.
 * Return: The difference between the two strings.
 */
void reverse_array(int *a, int n)
{
int original_array[n];
int revers_array[n];

int i;

for (i = 0; i < n; i++)
{
original_array[i] = a[i];
revers_array[n - i] = original_array[i];

}
*a = revers_array;

}

