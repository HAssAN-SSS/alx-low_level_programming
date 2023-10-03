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
while (lenght--)
{
printf("%d\n", *argv[argc - lenght - 1]);


}
return (0);
}
