#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - gets an entry value from a hash table
 * @ht: a hash table
 * @key: entry key
 *
 * Return: the value of the entry, else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int ind = 0;
	hash_node_t *cur = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	ind = key_index((unsigned char *)key, ht->size);
	for (cur = ht->array[ind]; cur != NULL; cur = cur->next)
	{
		if (!strcmp(key, cur->key))
			return (cur->value);
	}
	return (NULL);
}
