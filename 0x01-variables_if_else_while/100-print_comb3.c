#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int j = 0;
int i = 0;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
putchar('0' + i);
putchar('0' + j);
if (i != 8 && j != 9)
{
putchar(",");
putchar(' ');
}
}


}
putchar('\n');

	return (0);
}
