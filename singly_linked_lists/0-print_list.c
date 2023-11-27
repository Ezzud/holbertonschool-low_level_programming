#include "lists.h"
#include <stdio.h>
#include <stddef.h>

size_t print_list(const list_t *h)
{
	const list_t *head = h;
	size_t n_count = 0;

	while (head != NULL) {
		if(head->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", head->len, head->str);
		head = head->next;
		n_count++;
	}
	return (n_count);
}