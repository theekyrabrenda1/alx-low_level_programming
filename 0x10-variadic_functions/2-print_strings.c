#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function used
 * @separator: string to be printed between strings
 * @n: number of arguments
 * @... : variadic function variable(s) declaration
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list list;
char *str;
unsigned int i;
va_start(list, n);
for (i = 0; i < n; i++)
{
str = va_arg(list, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(list);
}
