#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char srt = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
char *message = srt;
write(2, message, 59);
return (1);
}
