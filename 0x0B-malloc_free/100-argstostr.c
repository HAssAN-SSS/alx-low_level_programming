#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to a new string
*/


char *argstostr(int ac, char **av)
{
int i, j;
cahr **str;
if (ac == 0 || av == NULL)
{
return (NULL);
}
else
{
str = malloc(ac * sizeof(char *));
if (str == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < ac; i++)
{
str[i] = malloc(strlen(av[i]) * sizeof(char));
if (str[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(str[j]);
}
free(str);
return (NULL);
}
for (j = 0; av[i][j] != '\0'; j++)
{
str[i][j] = av[i][j];
}
return (str);
}
}
}
}


