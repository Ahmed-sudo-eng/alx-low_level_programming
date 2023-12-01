#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table on Success
 * and NULL on Failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t *array[100];
	hash_table_t *hashtable = (hash_table_t *)malloc(sizeof(hash_table_t));

	hashtable->size = size;
	hashtable->array = array;

	return (hashtable);
}
