#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_dnodeint - Add a new node in a
 * linked list (double)
 * @head: Pointer to the list
 * @n: Value of the node
 * Return: The Address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = last;

	*head = new_node;
	return (new_node);
}
