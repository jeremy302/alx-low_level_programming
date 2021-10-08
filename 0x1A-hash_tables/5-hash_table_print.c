#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: a hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	char t = 0;
	unsigned long i = 0;
	hash_node_t *node = NULL;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; ++i)
		for (node = ht->array[i]; node != NULL; node = node->next)
		{
			printf("%s'%s': '%s'",
				   t ? ", " : "", node->key, node->value);
			t = 1;
		}
	printf("}\n");
}
