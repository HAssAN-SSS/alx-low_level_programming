
/**
* swap_int - Swaps the values of two integers using pointers.
* @a: A pointer to the first integer.
* @b: A pointer to the second integer.
*
* Description: This function takes two pointers to integers as parameters
* and swaps the values stored at the
* memory locations pointed to by the pointers.
*/
void swap_int(int *a, int *b)
{
int *n;

*n = *a;
*a = *b;
*b = *n;
}
