#include "function_pointers.h"

/**
 * int_index - index of an integer
 * @array: - array to search in
 * @size: size of the array
 * @cmp: comparison function
 * Return: index of the first element for which the cmp functio
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (size <= 0 || array == NULL)
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
}
}
}

return (-1);


}

