#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to a new string
*/


char *argstostr(int ac, char **av)
{
char *str;
int i;
if (ac == 0 || av == NULL)
{
return (NULL);
}
else
{
str = malloc(ac * sizeof(char *));
if (str == NULL)
{

for (i = 1; i < ac; i++)
{
str[i] = malloc(sizeof(av[i]));
*str[i] = *av[i];

}
return (str);
}
}
}

