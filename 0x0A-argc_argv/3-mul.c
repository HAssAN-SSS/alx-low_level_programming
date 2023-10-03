#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - prints the name of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
*/

int main(int argc, char **argv)
{
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
}
else
{
fprintf(stderr, "Error\n");
}

return (0);
}
