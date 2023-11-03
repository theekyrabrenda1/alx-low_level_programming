#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function used 
 * @nmemb: string
 * @size: size
 *
 * Return: character
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
int i = 0, l = 0;
char *c;
if (nmemb == 0 || size == 0)
return (NULL);
l = nmemb * size;
c = malloc(l);
if (c == NULL)
return (NULL);
while (i < l)
{
c[i] = 0;
i++;
}
return (c);
}

