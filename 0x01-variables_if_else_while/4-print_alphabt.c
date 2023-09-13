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
for (i = 0; i < 26; i++)
{
if (string[i] != 'q' || string[i] != 'e')
{
putchar(string[i]);

}

}

putchar('\n');

	return (0);
}
