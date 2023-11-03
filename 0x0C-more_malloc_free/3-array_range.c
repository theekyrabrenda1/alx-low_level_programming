#include "main.h"
#include <stdlib.h>
/**
 * array_range - function used
 * @min: integer
 * @max: integer
 *
 * Return: integer
 */

int *array_range(int min, int max)
{
int i = 0, *a;
if (min > max)
return (NULL);
a = malloc((sizeof(int) * (max - min)) + sizeof(int));
if (a == NULL)
return (NULL);
while (min <= max)
{
a[i] = min;
i++;
min++;
}
return (a);
}

