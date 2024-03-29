#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 *print_opcodes - function used
 *@num_bytes: number bytes used
 *Return: nothing
 */
void print_opcodes(int num_bytes)
{
unsigned char* opcode_ptr = (unsigned char*)print_opcodes;
for (int i = 0; i < num_bytes; i++)
{
printf("%02x ", opcode_ptr[i]);
}
printf("\n");
}
/**
 *main - entry point
 *@argc: argc
 *@argv: argv
 *Return: 0 on success, 1 and 2 on error
 */
int main(int argc, char* argv[])
{
if (argc != 2)
{
printf("Error\n");
return 1;
}

int num_bytes = atoi(argv[1]);
if (num_bytes < 0)
{
printf("Error\n");
return 2;
}

print_opcodes(num_bytes);
return 0;
}
