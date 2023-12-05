#include "hash_tables.h"
/**
 * add_hash_node - Add a node at the start of a table
 * @head: Head of the table
 * @key: Key of the table
 * @value: Value of the node
 * Return: Head of the table
 */
hash_node_t *add_hash_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *temp;

	temp = *head;
	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (*head);
		}
		temp = temp->next;
	}

	temp = malloc(sizeof(hash_node_t));
	if (temp == NULL)
		return (NULL);

	temp->key = strdup(key);
	temp->value = strdup(value);
	temp->next = *head;
	*head = temp;

	return (*head);
}
/**
 * hash_table_set - Add a hash
 * @ht: Pointer to the table
 * @key: Hash key
 * @value: Hash value
 * Return: 1 Success or 0 if Error
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int k_index;

	if (ht == NULL)
		return (0);
	if (key == NULL || *key == '\0')
		return (0);

	k_index = key_index((unsigned char *)key, ht->size);
	if (add_hash_node(&(ht->array[k_index]), key, value) == NULL)
		return (0);
	return (1);
}