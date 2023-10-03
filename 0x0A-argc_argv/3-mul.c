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
int result;
int i = 0;
if (argc >= 3)
{
result = atoi(argv[1]);
for (i = 2; i < argc; i++)
{
result *= atoi(argv[i]);
}
printf("%d\n", result);
printf("\n");

}
else
{
fprintf(stderr, "Error\n");
printf("\n");
err = 1;
}

return (err);
}
