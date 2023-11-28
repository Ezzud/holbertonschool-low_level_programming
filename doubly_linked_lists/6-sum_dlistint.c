#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * sum_dlistint - Get sum of all node value
 * @head: Pointer to the list
 * Return: The sum of all values
 * 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *last = head;
	int count = 0;

	if (last == NULL)
		return (count);

	count += last->n;
	while (last->next != NULL)
	{
		last = last->next;
		count += last->n;
	}
	return (count);
}
