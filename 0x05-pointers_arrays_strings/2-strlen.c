/**
 * string_length - Calculate the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string (number of characters).
 */
int string_length(const char *str)
{
int length = 0;


while (str[length] != '\0')
{
length++;
}

return (length);
}
