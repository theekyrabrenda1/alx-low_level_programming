#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *_strpbrk(char *s, char *accept)
{
int i, n;
for (i = 0; s[i] != '\0'; i++)
{
for (n = 0; accept [n] != '\0'; n++)
{
if (s[i] == accept[n])
return (s + i);
}
}
return (0);
}
