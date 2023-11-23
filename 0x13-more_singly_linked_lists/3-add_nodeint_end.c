#include "lists.h"

/**
 * add_nodeint_end - function used
 * @head: pointer to the address of the head
 * @n: integer
 * Return: On success, address of the new element, otherwise NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	list_int *new_node, *last_node;
	new_node = malloc(sizeof(listint_t));
	if (new_node = NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;
		while (last_node-> != NULL)
			last_node = last_node->next;
		last_node->next = new;
	}
	return (*head);
}
