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
	hash_table_t *hashtable = (hash_table_t*)malloc(sizeof(hash_table_t));
	hash_node_t *array = (hash_node_t*)calloc(size, sizeof(hash_node_t));

	/* Make sure the memory was allocated succesfully */
	if (hashtable == NULL)
		return (NULL);
	if (array == NULL)
		return (NULL);

	hashtable->size = size;
	hashtable->array = &array;

	return (hashtable);
}
