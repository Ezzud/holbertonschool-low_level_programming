#include "hash_tables.h"
/**
 * hash_table_delete - Delete a hash table
 * @ht: Pointer to the table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	hash_node_t *hash;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while ((hash = temp) != NULL)
		{
			temp = temp->next;
			free(hash->key);
			free(hash->value);
			free(hash);
		}
	}
	free(ht->array);
	free(ht);
}
