#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete the node at the given index
 * @head: a double pointer to the head of the list
 * @index: the index of the node to delete
 *
 * Return: the value of the deleted node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = NULL,
		*current = head == NULL ? NULL : *head,
		*next = current == NULL ? NULL : current->next;
	int n = -1;

	for (; current != NULL && next != NULL && index; --index)
		prev = current, current = next, next = next->next;
	if (current == NULL)
		return (-1);
	if (prev == NULL)
		n = current == NULL ? -1 : 1, free(current), *head = next;
	else
		n = 1, free(current), prev->next = next;
	return (n);
}
