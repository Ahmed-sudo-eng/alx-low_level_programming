#include "hash_tables.h"

/**
 * hash_taple_print - a function that prints a hash table
 * @ht: the hash table
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
			printf("%ld\n", i);
	}
}
