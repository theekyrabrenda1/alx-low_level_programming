#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - function used
 * @s: input
 * @accept: input value
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
int i, n;
for (i = 0; s[i] != '\0'; i++)
{
for (n = 0; accept[n] != '\0'; n++)
{
if (s[i] == accept[n])
return (s + i);
}
}
return (NULL);
}
