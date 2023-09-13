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
int i = 0;
	char *string = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ";
	char *stringUp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ ";
for (i = 0; i < 26; i++)
{
putchar(string[i]);
}
for (i = 0; i < 26; i++)
{
putchar(stringUp[i]);
}
putchar('\n');

	return (0);
}
