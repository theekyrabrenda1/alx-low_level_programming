#include "main.h"
#include <stdio.h>
/**
 *main - entry point
 *@argc: argument count
 *@argv: argument vector
 *Return: always 0(success)
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
