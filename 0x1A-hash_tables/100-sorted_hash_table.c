#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * shash_table_create - creates an ordered hash table
 * @size: number of buckets
 *
 * Return: an ordered hashtable
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = size == 0 ? NULL :
		calloc(1, sizeof(shash_table_t) +
			   size * sizeof(shash_node_t *));
	if (ht != NULL)
	{
		ht->size = size;
		ht->array = (void *)((char *)ht + sizeof(shash_table_t));
	}
	return (ht);
}

/**
 * shash_table_set - assigns a value to a key in an ordered hash table
 * @ht: an ordered hashtable
 * @key: a string
 * @value: a string
 *
 * Return: 1 if the value was assigned else 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	int ind = 0;
	shash_node_t *node = NULL, *prv = NULL, *cur = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	ind = key_index((unsigned char *)key, ht->size);
	for (cur = ht->array[ind]; cur != NULL; cur = cur->next)
		if (!strcmp(key, cur->key))
		{
			free(cur->value);
			cur->value = value ==  NULL ? NULL : strdup(value);
			return (1);
		}
	node = calloc(1, sizeof(shash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key), node->value =  value ==  NULL ? NULL : strdup(value);
	node->next = ht->array[ind], ht->array[ind] = node;
	for (cur = ht->shead; cur != NULL; prv = cur, cur = cur->snext)
	{
		if (strcmp(key, cur->key) < 0)
		{
			if (prv == NULL)
				ht->shead = node, node->snext = cur, cur->sprev = node;
			else
			{
				node->snext = prv->snext, prv->snext = node, node->sprev = prv;
				if (node->snext == NULL)
					ht->stail = node;
				else
					node->snext->sprev = node;
			}
			return (1);
		}
	}
	if (ht->shead == NULL)
		ht->shead = node, ht->stail = node;
	else
		node->sprev = ht->stail, ht->stail->snext = node, ht->stail = node;
	return (1);
}

/**
 * shash_table_get - gets the value assigned to a key in a hash table
 * @ht: a hashtable
 * @key: a string
 *
 * Return: a string
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	int ind = 0;
	shash_node_t *cur = NULL;

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

/**
 * shash_table_print - prints an ordered hash table
 * @ht: an ordered hash table
 *
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	char t = 0;
	shash_node_t *node = NULL;

	if (ht == NULL)
		return;
	printf("{");
	if (ht != NULL)
		for (node = ht->shead; node != NULL; node = node->snext)
		{
			printf("%s'%s': '%s'",
				   t ? ", " : "", node->key, node->value);
			t = 1;
		}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints an ordered hash table in reverse
 * @ht: an ordered hash table
 *
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	char t = 0;
	shash_node_t *node = NULL;

	if (ht == NULL)
		return;
	printf("{");
	if (ht != NULL)
		for (node = ht->stail; node != NULL; node = node->sprev)
		{
			printf("%s'%s': '%s'",
				   t ? ", " : "", node->key, node->value);
			t = 1;
		}
	printf("}\n");
}

/**
 * shash_table_delete - deletes an ordered hash table
 * @ht: an ordered hash table
 *
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *cur = NULL, *nxt = NULL;

	if (ht == NULL)
		return;
	for (cur = ht->shead; cur != NULL; cur = nxt)
	{
		nxt = cur->snext;
		free(cur->key);
		free(cur->value);
		free(cur);
	}
	free(ht);
}
