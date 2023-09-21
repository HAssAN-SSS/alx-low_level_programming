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
int *original_array;
int *revers_array;

int i;

original_array = *a;
*revers_array = *a;
for (i = 0; i < n; i++)
{
(*revers_array + (n - i)) = (*original_array + i);

}
*a = *revers_array;

}

