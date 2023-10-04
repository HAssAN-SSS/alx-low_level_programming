#include <stdio.h>
#include <malloc.h>
/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: char to fill the array
 * Return: pointer to the array
*/
char *create_array(unsigned int size, char c)
{
char *pointer;
unsigned int i;

if (size == 0)
{
return (NULL);
}
else
{
pointer = malloc(size * sizeof(char));
if (pointer == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < size; i++)
{
pointer[i] = c;
}

return (pointer);
}
}
}
