#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key we are looking for
 *
 * Return: the value associated with the element or NULL if key could'nt
 * be found
 */
char *hash_table_get(const hash_table_t  *ht, const char *key)
{
	unsigned long int idx = key_index((unsigned char *)key, ht->size);

	if (ht->array[idx] == NULL)
		return (NULL);
	if (ht->array[idx]->key)
		return (ht->array[idx]->value);
	return (NULL);
}
