#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void _puts(char *s)
{
for (; *s != '\0'; s++)
{
_putchar(s);
}
_putchar('\n');
}
