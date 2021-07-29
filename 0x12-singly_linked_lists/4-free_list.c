#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a linked string list
 * @head: head of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *next;

	for (; head != NULL; head = next)
		free(head->str), next = head->next, free(head);
}
