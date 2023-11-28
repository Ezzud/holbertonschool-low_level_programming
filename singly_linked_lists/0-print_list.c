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
	const list_t *head = h;
	size_t n_count = 0;

	while (head != NULL)
	{
		if (head->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", head->len, head->str);
		head = head->next;
		n_count++;
	}
	return (n_count);
}
