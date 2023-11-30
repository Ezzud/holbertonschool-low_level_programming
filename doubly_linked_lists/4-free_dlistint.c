#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Free a linked
 * list (double)
 * @head: Pointer to the linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
