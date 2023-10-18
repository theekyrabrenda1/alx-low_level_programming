#include <stdio.h>
/**
 * swap_int - function used
 *
 * @a: first character
 * @b: second character
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
int first = *a;
*a = *b;
*b = first;
}
