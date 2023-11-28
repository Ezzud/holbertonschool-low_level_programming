#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Free a linked
 * list (double)
 * @head: Pointer to the linked list
 */
void free_dlistint(dlistint_t *head)
{
	if (head->next)
		free_dlistint(head->next);
	free(head);
}
