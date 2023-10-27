#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int _isalpha(int c)
{
if (c >= 65 && c <= 97) || (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
