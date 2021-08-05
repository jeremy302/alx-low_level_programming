#include "main.h"

/**
 * get_bit - gets the bit at a specific index of an integer
 * @n: the integer to query
 * @index: the index to query for
 *
 * Return: the bit at the index, or -1 if it fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long mask = 1 << index;

	return (index >= sizeof(long) * 8 ? -1 : !!(n & mask));
}
