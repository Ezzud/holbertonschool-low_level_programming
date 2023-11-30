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
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
