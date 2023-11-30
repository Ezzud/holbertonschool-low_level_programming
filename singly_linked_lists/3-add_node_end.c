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
{
	list_t *new_node, *temp;
	size_t count;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (count = 0; str[count]; count++)
		;

	new_node->len = count;
	new_node->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (*head);
}
