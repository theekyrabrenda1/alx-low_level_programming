#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - function used
 * @separator: strings to be inserted between numbers
 * @n: number of arguments
 * @... : variadic function variables declaration
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;
va_start(list, n);
while (i < n)
{
printf("%d", va_arg(list, int));
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
i++;
}
printf("\n");
va_end(list);
}

