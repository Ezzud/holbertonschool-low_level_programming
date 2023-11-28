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
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	new_node->n = n;
	new_node->prev = last;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return (new_node);
}
