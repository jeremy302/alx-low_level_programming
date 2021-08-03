#include "lists.h"

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
 * print_uint - writes a signed as the given base to the standard output
 * @num: the number to write
 * @base: the base to write the number as
 *
 * Return: void
 */
void print_uint(unsigned long num, unsigned int base)
{
	uint div = num / base, rem = num % base;

	if (div == 0)
		_putchar(rem + '0' + ('a' - '9' - 1) * (rem > 9));
	else
		print_uint(div, base), _putchar(rem + '0' + ('a' - '9' - 1) * (rem > 9));
}

/**
 * print_int - writes an unsigned as the given base to the standard output
 * @num: the number to write
 * @base: the base to write the number as
 *
 * Return: void
 */
void print_int(long num, unsigned int base)
{
	if (num < 0)
		_putchar('-'), print_int(num * -1, base);
	else
		print_uint(num, base);
}

/**
 * put_str - writes a string to the standard output
 * @str: a string
 *
 * Return: void
 */
void put_str(char *str)
{
	while (*str)
		_putchar(*str++);
}

/**
 * print_listint_safe - prints a normal/cyclic list
 * @head: the head of the list
 *
 * Return: the length of the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0, len = 0, index_size = 10;
	listint_t **index = malloc(sizeof(listint_t) * index_size);

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		for (i = 0; i < len; ++i)
			if (index[i] == head)
			{
				put_str("-> ["), print_uint((unsigned long) head, 16), put_str("] ");
				print_int(head->n, 10), put_str("\n");
				goto exit;
			}
		put_str("["), print_uint((unsigned long) head, 16), put_str("] ");
		print_int(head->n, 10), put_str("\n");
		len++;
		if (len == index_size)
			index = _realloc(index, sizeof(listint_t) * index_size,
							sizeof(listint_t) * (index_size + 10)), index_size += 10;
		if (index == NULL)
			exit(98);
		index[len - 1] = (void *)head;
		head = head->next;
	}
exit:
	return (len);
}
