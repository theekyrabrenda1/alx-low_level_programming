#include <stdio.h>
#include "function_pointers.h"
/**
 *print_name - function used
 *@name: name to be printed
 *@f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}

void print_func(char *name)
{
printf("%s\n", name);
}
