#include "main.h"
/**
 * reverse_array - function used
 * @a: array
 * @n: number of elements
 *Return: nothing
 */
void reverse_array(int *a, int n)
{
int i, t;
for (i = 0; i < n--; i++)
{
t = a[i];
a[i] = a[n];
a[n] = t;
}
}
