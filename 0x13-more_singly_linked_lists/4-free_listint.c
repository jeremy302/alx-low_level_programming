#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a linked integer list
 * @head: head of the list to free
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *h;

	for (; head != NULL; head = h)
		h = head->next, free(head);
}
