#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at an index in doubly-linked list
 * @head: head of the list
 * @index: index of node to delete
 *
 * Return: 1 if the node was deleted, else 0
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev = NULL, *current = head == NULL ? NULL : *head;

	if (head == NULL || *head == NULL)
		return (0);
	if (current != NULL)
		while (current->prev != NULL)
			current = current->prev;
	if (!index)
	{
		if (*head == NULL)
			return (0);
		current = current->next;
		if (current != NULL)
			current->prev = NULL;
		free(*head);
		*head = current;
		return (1);
	}
	while (index && current != NULL)
		--index, prev = current, current = prev->next;
	if (index != 0 || prev == NULL || current == NULL)
		return (0);
	prev->next = current->next;
	if (prev->next != NULL)
		prev->next->prev = prev;
	free(current);
	return (1);
}
