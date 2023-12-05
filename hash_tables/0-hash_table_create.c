#include "hash_tables.h"
/**
 * hash_table_create - Create a
 * has table
 * @size: Size of the hashtable
 * Return: created hashtable, NULL if error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable;
	hash_node_t **hashlist;
	unsigned long int i;

	hashtable = malloc(sizeof(hash_table_t));
	if (hashtable == NULL)
		return (NULL);
	hashlist = malloc(sizeof(hash_node_t *) * size);
	if (hashlist == NULL)
		return (NULL);


	for (i = 0; i < size; i++)
		hashlist[i] = NULL;
	hashtable->array = hashlist;
	hashtable->size = size;

	return (hashtable);
}
