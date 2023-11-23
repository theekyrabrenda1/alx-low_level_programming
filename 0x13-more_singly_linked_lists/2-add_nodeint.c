#include "lists.h"

/**
 * add_nodeint - function used
 * @head: pointer to the address of the head
 * @n: integer
 * Return: On success, address of the element, otherwise NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new = NULL)
		return (NULL);
	new-> = n;
	new->next = *head;
	*head = new;
	return (new);
}
