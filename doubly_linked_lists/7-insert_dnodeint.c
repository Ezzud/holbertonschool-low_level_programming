#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Insert node
 * at a specific index
 * @h: Pointer to the list
 * @idx: Index of the node
 * @n: Value of the node
 * Return: The node at the address
 * NULL if not found
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *last = *h;

	new_node->n = n;
	new_node->next = NULL;

	if (*h == NULL && idx != 0)
		return (NULL);

	if (idx == 0)
	{
		if (*h != NULL)
			new_node->next = *h;
		*h = new_node;
		return (new_node);
	}

	while (--idx)
	{
		if (last->next)
			last = last->next;
		else
			return (NULL);
	}

	new_node->next = last->next;
	new_node->prev = last;
	last->next = new_node;
	return (new_node);
}
