#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * get_dnodeint_at_index - Get node
 * at a specific index
 * @head: Pointer to the list
 * @index: Index of the node
 * Return: The node at the address
 * NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *last = head;
	unsigned int pos = 0;

	if (last == NULL)
		return (NULL);
	if (pos == index)
		return (last);

	while (last->next != NULL)
	{
		pos++;
		if (pos == index)
			return (last->next);
		last = last->next;
	}
	return (NULL);
}
