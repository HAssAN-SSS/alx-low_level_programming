#include "function_pointers.h"
/**
 * array_iterator - prints each element of an array
 * @array: the array to print
 * @action: the action to perform on each element
 * @size: the size of the array
*/



void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;
if (array != NULL && size != 0 && action != NULL)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
