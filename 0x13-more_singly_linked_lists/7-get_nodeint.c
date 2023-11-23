#include "lists.h"

/**
 * get_nodeint_at_index - function used
 * @head: pointer to the head
 * @index: pointer to the node index
 * Return: nth node, else NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
