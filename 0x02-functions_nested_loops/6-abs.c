#include "main.h"
#include <stdio.h>
/**
 *_abs - prototype used
 *@c:character to be checked
 *Return:abs_val, c
 */
int _abs(int c)
{
if (c < 0)
{
int abs_val;
abs_val = c * -1;
return (abs_val);
}
return (c);
}
