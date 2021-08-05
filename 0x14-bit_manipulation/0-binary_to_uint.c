#include "main.h"

/**
 * binary_to_uint - converts a binary string to an unsigned integer
 * @b: a string
 *
 * Return: the binary string as an unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	while (b != NULL && *b)
		if (*b == '0' || *b == '1')
			num <<= 1, num |= *b++ == '1';
		else
			return (0);
	return (num);
}
