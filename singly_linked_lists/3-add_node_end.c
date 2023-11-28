#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Add a new node in a
 * linked list at the end
 * @head: Pointer to the list
 * @str: Value of the node
 * Return: The Address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	list_t *last = *head;

	new_node->str = strdup(str);
	new_node->len = strlen(str);
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
