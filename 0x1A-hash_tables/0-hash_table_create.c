#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table
 * @size: number of buckets
 *
 * Return: a hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = calloc(1, sizeof(hash_table_t) +
							  size * sizeof(hash_node_t *));
	if (ht != NULL)
	{
		ht->size = size;
		ht->array = (void *)((char *)ht + sizeof(hash_table_t));
	}
	return (ht);
}
