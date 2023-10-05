#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * strtow - splits a string into words.
 * @str: The string to be split.
 * Return: A pointer to an array
*/
char **strtow(char *str)
{
char **father;
int length = strlen(str);
father = malloc(length + 1 * sizeof(char *));
printf("%d", lenght);
return ();
}

/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
void print_tab(char **tab)
{
int i;

for (i = 0; tab[i] != NULL; ++i)
{
printf("%s\n", tab[i]);
}
}

/**
 * main - check the code for ALX School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
char **tab;
tab = strtow("      ALX School         #cisfun      ");
if (tab == NULL)
{
printf("Failed\n");
return (1);
}
print_tab(tab);
return (0);
}
