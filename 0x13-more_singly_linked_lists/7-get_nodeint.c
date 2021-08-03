#include "lists.h"

/**
 * get_nodeint_at_index - retrieves the node at a given index
 * @head: head of the list
 * @index: index to retrieves
 *
 * Return: the node found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (head != NULL && index--)
		head = head->next;
	return (head);
}
