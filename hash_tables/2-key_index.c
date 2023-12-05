#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key
 * @key: Key to check
 * @size: Hashtable size
 * Return: Index of the key OR 0 if empty
 * or null key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
