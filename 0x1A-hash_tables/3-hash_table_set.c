#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: the hash table must add or update the key/value to
 * @key: is the key and can not be an empty string
 * @value: is the value associated with the key and can be an empty string
 *
 * Return: On Succes (1), On Failure (0)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = key_index((unsigned char *) key, ht->size);

	ht->array[idx] = (hash_node_t *)malloc(sizeof(hash_node_t));
	ht->array[idx] = NULL;
	ht->array[idx]->key = (char *) key;
	ht->array[idx]->value = (char *) value;
	ht->array[idx]->next = NULL;


	return (1);
}
