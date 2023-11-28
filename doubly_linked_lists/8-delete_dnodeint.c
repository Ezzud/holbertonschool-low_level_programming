#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - Delete
 * node at the nth position
 * @head: Pointer to the list
 * @index: Index of the node
 * Return: 1 if success, -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *last;
	dlistint_t *temp;
	unsigned int i;

	last = *head;
	if (last != NULL)
		while (last->prev != NULL)
			last = last->prev;
	else
		return (-1);
	i = 0;
	while (last != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = last->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				temp->next = last->next;

				if (last->next != NULL)
					last->next->prev = temp;
			}

			free(last);
			return (1);
		}
		temp = last;
		last = last->next;
		i++;
	}
	return (-1);
}
