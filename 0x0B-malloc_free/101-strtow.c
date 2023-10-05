#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int wordCount(char *str);

/**
 * wordCount - counts the number of words in a string
 * @str: The string to be counted.
 * Return: The number of words
 */
int wordCount(char *str)
{
int i;
int count = 0;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] == ' ')
{
count++;
}
}

return (count + 1);
}

/**
 * strtow - splits a string into words.
 * @str: The string to be split.
 * Return: A pointer to an array
 */
char **strtow(char *str)
{
int i, j, k;
char **father;
int sizeCount = 0;
int wordcount = wordCount(str);
if (str == NULL || *str == '')
{
return (NULL);
}

father = malloc((wordcount + 1) * sizeof(char *));
if (father == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < wordcount; i++)
{
sizeCount = 0;
while (str[sizeCount] != ' ' && str[sizeCount] != '\0')
{
sizeCount++;
}
father[i] = malloc((sizeCount + 1) * sizeof(char));
if (father[i] == NULL)
{
for (k = 0; k < i; k++)
{
free(father[k]);
}
free(father);
return (NULL);
}

for (j = 0; j < sizeCount; j++)
{
father[i][j] = str[j];
}

father[i][j] = '\0';

str += sizeCount;

while (*str == ' ' && *str != '\0')
{
str++;
}
}
father[wordcount] = NULL;
}

return (father);
}


