#include "main.h"
/**
 *print_last_digit - last digit
 *@n: character used in execution
 *Return: Last
 */
int print_last_digit(int n)
{
int last;
last = n % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last + '0');
return (last);
}
