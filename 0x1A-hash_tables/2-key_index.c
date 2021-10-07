#include "hash_tables.h"

/**
 * key_index - returns the index of a key in a hashtable
 * @key: the key
 * @size: number of buckets in the hashtable
 *
 * Return: index of the item with the specified key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
