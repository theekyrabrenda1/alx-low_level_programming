#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function used
 * @n: number of arguments
 * @...: variadic variable declaration
 * Return: sum on success else 0
 *
 */

int sum_them_all(const unsigned int n, ...)
{
va_list list;
int sum;
unsigned int v;
if (n == 0)
return (0);
va_start(list, n);
sum = 0;
v = 0;
while (v < n)
{
sum += va_arg(list, int);
v++;
}
va_end(list);
return (sum);
}
