#include <stdlib.h>
#include "function_pointers.h"
/**
 *array_iterator - function used
 *@array: array
 *@size: size
 *(*action)(int) - function
 *Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
for (size_t i = 0; i < size; i++)
{
action(array[i]);
}
}
