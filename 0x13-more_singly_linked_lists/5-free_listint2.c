#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a linked list and sets the pointer to NULL
 * @head: double pointer to the head of the list to free
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *h;

	if (head != NULL)
		for (; *head != NULL; *head = h)
			h = (*head)->next, free(*head);
}
