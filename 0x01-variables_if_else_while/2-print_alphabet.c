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
	char string = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < 26; i++)
    {
    putchar(string[i]);
    }

	return (0);
}
