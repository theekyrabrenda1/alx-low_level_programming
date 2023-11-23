#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function used
 * @ h: pointer of the head
 * Return: number of node in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	while (h)
	{
		nodes++;
		printf("%d\n", h->next);
		h = h->next;
	}
	return (nodes);
}
