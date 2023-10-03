#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
*/

int main(int argc, char **argv)
{
int lenght = argc;
for (lenght = 0; argv[lenght] != NULL; lenght++)
{
printf("%s\n", argv[lenght]);


}
return (0);
}
