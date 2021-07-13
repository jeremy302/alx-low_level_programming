#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - returns array filled with c
 * @size: size of array
 * @c: char to fill array with
 *
 * Return: an array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(sizeof(char) * size), *ptr_tmp = size ? ptr : NULL;

	if (ptr_tmp)
		while (ptr_tmp && size-- > 0)
			*ptr++ = c;
	return (ptr_tmp);
}
