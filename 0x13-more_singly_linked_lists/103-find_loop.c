#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop - finds the node which the list loop points to
 * @head: head of the list
 *
 * Return: the node the loop points to
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *hare = head == NULL ? NULL : head->next,  *tortoise = head;

	while (hare != NULL && hare != tortoise)
	{
		hare = hare->next;
		tortoise = hare == tortoise ? tortoise : tortoise->next;
		hare = hare == tortoise || hare == NULL ? hare : hare->next;
	}
	if (hare != NULL)
		for (; hare != head; head = head->next)
		{
			hare = hare->next;
			for (; hare != tortoise; hare = hare->next)
				if (hare == head)
					goto exit;
		}
exit:
	return (hare);
}
