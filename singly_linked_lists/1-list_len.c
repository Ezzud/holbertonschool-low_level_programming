#include "lists.h"
#include <stddef.h>

/**
 * list_len - Get the size of a linked
 * list
 * @h: Pointer to the linked list
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *head = h;
	size_t n_count = 0;

	while (head != NULL)
	{
		head = head->next;
		n_count++;
	}
	return (n_count);
}
