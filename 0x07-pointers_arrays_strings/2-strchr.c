#include "main.h"
#include <stddef.h>
/**
 * _strchr - function used
 * @s: pointer
 * @c: input value
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (s + i);
}
return (NULL);
}
