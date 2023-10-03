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
for (i = 1; i < argc; i++)
{
result = atoi(argv[i]);
if (result == 0)
{
printf("Error\n");
err = 1;
break;
}
}
if (argc >= 3 && err == 0)
{
result = atoi(argv[1]);
for (i = 2; i < argc; i++)
{
result += atoi(argv[i]);
}
printf("%d\n", result);

}
else
{
printf("Error\n");
err = 1;
}

return (err);
}
