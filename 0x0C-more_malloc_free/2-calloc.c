#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - allocates a block of size: `size * nmemb`, all set to 0
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to the block
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int total_size = nmemb * size;

	if (total_size <= 0)
		return (NULL);
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	while (total_size--)
		ptr[total_size] = 0;
	return (ptr);
}
