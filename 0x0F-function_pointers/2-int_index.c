#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: the array to search
 * @size: the size of the array
 * @cmp: the comparison function
 * Return: the index of the first element for which the cmp function
*/


int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
int work = 0
if (size <= 0)
{
return (-1);
}
else
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
work = 1;
}
}
}
if (work == 0)
{
return (-1);
}

}
