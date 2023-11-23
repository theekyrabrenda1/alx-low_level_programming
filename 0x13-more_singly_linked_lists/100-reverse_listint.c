#include "lists.h"

/**
 * reverse_listint - function used
 * @head: pointer to the address of the head
 * Return: pointer of first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *a;
	listint_t *b;
	a = NULL;
	b = NULL;

	while (*head != NULL)
	{
		b = (*head)->next;
		(*head)->next = a;
		a = *head;
		*head = b;
	}
	*head = a;
	return (*head);
}
