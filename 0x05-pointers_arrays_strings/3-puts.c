#include "main.h"
/**
 * _puts  - function used
 *
 * @str: string to print
 *
 * Return: nothing
 */
void _puts(char  *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
