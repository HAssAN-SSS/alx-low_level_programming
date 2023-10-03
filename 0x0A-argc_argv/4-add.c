#include <stdio.h>
#include <string.h>
#include <stdlib.h>



/**
 * main - prints the name of the program
 * displayError - prints the error if it exists
 * @argc: argument count
 * @argv: argument vector
 *
 * This function is responsible for printing the error if it exists.
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
*/


int main(int argc, char **argv)
{
int err = 0;
int result = 0;
int i = 0;
int j = 0;


for (i = 1; i < argc; i++)
{
if (atoi(argv[i]) == 0 || argc < 3)
{

err = 1;
printf("Error\n");
break;
}
}



if (err == 0)
{
for (j = 1; j < argc; j++)
{

result += atoi(argv[j]);
}
printf("%d\n", result);
}



return (err);
}
