#include "main.h"

/**
 * get_endianness - gets the endianness of the cpu
 *
 * Return: 0 Big Endian, 1 for Little Endian
 */
int get_endianness(void)
{
	unsigned long num = 1;

	return ((num >> 8) << 8 != num);
}
