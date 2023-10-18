#include <stdio.h>
/**
 * _strlen  - function used
 *
 * @str: string to get length of
 *
 * Return: length of the string
 */
size_t _strlen(const char *str)
{
size_t length = 0;
while (*str++)
length++;
return (length);
}
