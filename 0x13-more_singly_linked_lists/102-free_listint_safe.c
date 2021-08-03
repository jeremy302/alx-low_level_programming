#include "lists.h"
#include <stdlib.h>

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
		return (NULL);
	for (; i < (old_size < new_size ? old_size : new_size); i++)
		ptr_[i] = ((char *)ptr)[i];
	free(ptr);
	return (ptr_);
}

/**
 * free_listint_safe - frees a normal/cyclic list
 * @h: a double pointer to the head of the list
 *
 * Return: the length of the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0, len = 0, index_size = 10;
	listint_t **index = malloc(sizeof(listint_t) * index_size),
		*head = *h, *head_tmp = NULL;

	if (h == NULL || head == NULL)
		return (0);
	while (head != NULL)
	{
		for (i = 0; i < len; ++i)
			if (index[i] == head)
				goto exit;
		len++;
		if (len == index_size)
			index = _realloc(index, sizeof(listint_t) * index_size,
							 sizeof(listint_t) * (index_size + 10)), index_size += 10;
		if (index == NULL)
			exit(98);
		index[len - 1] = (void *)head;
		head_tmp = head;
		head = head->next;
		free(head_tmp);
	}
exit:
	*h = NULL;
	return (len);
}
