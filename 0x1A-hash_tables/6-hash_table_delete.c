#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - deletes a hash table
 * @ht: a hashtable
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long i = 0;
	hash_node_t *cur = NULL, *nxt = NULL;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; ++i)
	{
		for (cur = ht->array[i]; cur != NULL; cur = nxt)
		{
			nxt = cur->next;
			free(cur->key);
			free(cur->value);
			free(cur);
		}
	}
	free(ht);
}
