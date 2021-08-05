#include "main.h"

/**
 * set_bit - sets the bit at a specific index to 1
 * @n: the integer to mutate
 * @index: the index to mutate
 *
 * Return: 1 if successful, else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long mask = 1 << index;

	return (index >= sizeof(long) * 8 ? -1 : !!(*n |= mask));
}
