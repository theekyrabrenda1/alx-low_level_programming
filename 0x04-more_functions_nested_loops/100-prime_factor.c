#include  <stdio.h>
#include "main.h"
#include <math.h>
/**
 *main - entry point
 *Return: Always 0(Success)
 */
int main(void)
{
long maxf;
int x;
long number = 612852475143;
double square = sqrt(number);
for (x = 0; x <= square; x++)
{
if (number % x == 0)
{
maxf = number / x;
}
}
printf("%ld\n", maxf);
return (0);
}
