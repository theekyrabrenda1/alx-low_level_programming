#include "lists.h"

/**
 * pop_listint - function used
 * @head: pointer to the address of the head
 * Return: head's data
 */

int pop_listint(listint_t **head)
{
	int node;
	listint_t *h;
	listint_t *current;
	if (*head == NULL)
		return (0);
	current = *head;
	node = current->n;
	h = current->next;
	free(current);
	*head = h;
	return (node);
}
