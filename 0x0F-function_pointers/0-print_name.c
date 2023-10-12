#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name to print
 * @f: value to print
*/


void print_name(char *name, void (*f)(char *))
{
void (*printo)(char *);
printo = f;
printo(name);
}
