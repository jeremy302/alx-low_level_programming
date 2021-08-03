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

	for (; current != NULL && index; --index)
		prev = current, current = next, next = next == NULL ? NULL : next->next;
	if (current == NULL || index)
		return (-1);
	if (prev == NULL)
		return (free(current), *head = next, 1);
	free(current), prev->next = next;
	return (1);
}
