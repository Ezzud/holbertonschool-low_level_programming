#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Add a new node in a
 * linked list
 * @head: Pointer to the list
 * @str: Value of the node
 * Return: The Address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	int len;

	while (str != '\0')
	{
		len++;
		str++;
	}
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = head;
	*head = new_node;

	return (new_node);
}
