#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - Print content of a linked
 * list
 * @h: Pointer to the linked list
 * Return: Number of elements
 */
size_t print_list(const list_t *h)
{
	size_t n_count;

	n_count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n_count++;
	}
	return (n_count);
}
