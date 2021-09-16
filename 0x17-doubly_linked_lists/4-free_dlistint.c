#include "lists.h"

/**
 * free_dlistint - frees a doubly-linked list
 * @head: head of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	void *tmp = NULL;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while (head != NULL)
		tmp = head, head = head->next, free(tmp);
}
