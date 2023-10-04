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
int alternativ = 0;
int monidaCount = 0;
int monidaIndex = 0;
int array[5] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
err = 1;
}

if (err != 1)
{
if (atoi(argv[1]) < 0)
{
printf("0");
printf("\n");
}
else
{

while (alternativ < atoi(argv[1]))
{

alternativ += array[monidaIndex];

if (alternativ > atoi(argv[1]))
{
alternativ -= array[monidaIndex];
monidaIndex++;
}
else
{
monidaCount++;
if (alternativ == atoi(argv[1]))
{
printf("%d", monidaCount);
printf("\n");
}
    
}





}


}

}


return (err);
}