#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dlistint - Print content of a linked
 * list (double)
 * @h: Pointer to the linked list
 * Return: Number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *head = h;
	size_t n_count = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		n_count++;
	}
	return (n_count);
}
