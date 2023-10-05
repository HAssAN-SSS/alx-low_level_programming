#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the name of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
*/
int main(int argc, char **argv)
{
if (argc != 2)
{
printf("Error\n");
return (1);
}
int amount = atoi(argv[1]);
if (amount < 0)
{
printf("0\n");
}
else
{
int coins[] = {25, 10, 5, 2, 1};
int count = 0;
for (int i = 0; amount > 0 && i < 5; i++)
{
count += amount / coins[i];
amount %= coins[i];
}

printf("%d\n", count);
}

return (0);
}
