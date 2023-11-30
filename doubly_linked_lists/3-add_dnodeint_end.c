#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - Add a new node in a
 * linked list (double)
 * @head: Pointer to the list
 * @n: Value of the node
 * Return: The Address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *h;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new_node;
	}
	else
		*head = new_node;

	new_node->prev = h;

	return (new_node);
}
