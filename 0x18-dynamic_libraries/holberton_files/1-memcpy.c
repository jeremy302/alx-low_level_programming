#include "holberton.h"

/**
 * _memcpy - copies src array to dest array
 * @dest: array to copy to
 * @src: array to copy from
 * @n: size of src
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_tmp = dest;

	while (n-- > 0)
		*dest++ = *src++;
	return (dest_tmp);
}
