#include "lists.h"

/**
 * free_listint - function used
 * @head: pointer to the head
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
