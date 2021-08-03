#include "lists.h"

/**
 * reverse_listint - reverses the list
 * @head: the head of the list
 *
 * Return: the head of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *slot_1 = *head,
		*slot_2 = slot_1 == NULL ? NULL : slot_1->next,
		*slot_3 = slot_2 == NULL ? NULL : slot_2->next;

	if (head == NULL || slot_1 == NULL)
		return (NULL);
	slot_1->next = NULL;
	while (slot_2 != NULL)
	{
		slot_2->next = slot_1;
		slot_1 = slot_2, slot_2 = slot_3,
			slot_3 = slot_3 == NULL ? NULL : slot_3->next;
	}
	*head = slot_1;
	return (slot_1);
}
