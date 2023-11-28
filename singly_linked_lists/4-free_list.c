#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Free a linked
 * list
 * @head: Pointer to the linked list
 */
void free_list(list_t *head)
{
	if (head->next)
		free_list(head->next);
	free(head);
}
