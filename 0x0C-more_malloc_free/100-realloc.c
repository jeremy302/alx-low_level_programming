#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "holberton.h"

/**
 * _realloc - reallocates the block at `ptr` to a block of size: `new_size`
 * @ptr: old block
 * @old_size: size of ptr
 * @new_size: size of new block
 *
 * Return: new block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_;
	unsigned int i = 0;

	if (ptr == NULL)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);

	if (new_size == old_size)
		return (ptr);

	ptr_ = malloc(new_size);
	if (ptr_ == NULL)
		return (free(ptr), NULL);
	for (; i < (old_size > new_size ? old_size : new_size); i++)
		ptr_[i] = ((char *)ptr)[i];
	free(ptr);
	return (ptr_);
}
