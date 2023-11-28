#include "lists.h"
#include <stddef.h>

/**
 * dlistint_len - Get the size of a linked
 * list (double)
 * @h: Pointer to the linked list
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *head = h;
	size_t n_count = 0;

	while (head != NULL)
	{
		head = head->next;
		n_count++;
	}
	return (n_count);
}
