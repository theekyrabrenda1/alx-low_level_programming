#include "main.h"
/**
 *_is digit: checks if a character is a digit
 *@c: character to be checked
 *Return: 1 on success, otherwise 0
 */
int _isdigit(int x)
{
if (x >= 48 && x <= 57)
{
return (1);
}
return (0);
}
