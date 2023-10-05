



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
char stringo[] = "hello";
char *s;
char *plswork;
int i;
int k = 0;
int llav = 0;
s = &stringo[0];
while (k < ac)
{
for (i = 0; av[k][i] != 0; i++)
{
llav++;
}
k++;
}
llav += k;
s = malloc((llav + 1) * sizeof(char));
plswork = s;
k = 1;
while (k < ac)
{
for (i = 0; av[k][i] != 0; i++)
{
*s = (char)av[k][i];
s++;
}
*s = '\n';
s++;
k++;
}
*s = '\0';
s++;
*s = '\n';
return (plswork);
}
