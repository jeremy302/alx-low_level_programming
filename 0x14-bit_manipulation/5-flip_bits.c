#include "main.h"

/**
 * flip_bits - gets the number of bits to flip in order to `m` to be `n`
 * @n: a long integer
 * @m: a long integer
 *
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int c = 0;

	while (n != m)
		c += (n & 1) != (m & 1), n >>= 1, m >>= 1;
	return (c);
}
