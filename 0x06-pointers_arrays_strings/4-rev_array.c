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

int temp;
int i;
if (n % 2 == 0)
{


for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}

}
else
{
for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
}

}

