#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds an entry into a hash table
 * @ht: the hash table
 * @key: a string
 * @value: value to store
 *
 * Return: 1 if the insertion was successful, else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int ind;
	hash_node_t *node = NULL, *cur = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	ind = key_index((unsigned char *)key, ht->size);
	for (cur = ht->array[ind]; cur != NULL; cur = cur->next)
	{
		if (!strcmp(key, cur->key))
		{
			free(cur->value);
			cur->value = value ==  NULL ? NULL : strdup(value);
			return (1);
		}
	}
	node = calloc(1, sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value =  value ==  NULL ? NULL : strdup(value);
	node->next = ht->array[ind];
	ht->array[ind] = node;
	return (1);
}
