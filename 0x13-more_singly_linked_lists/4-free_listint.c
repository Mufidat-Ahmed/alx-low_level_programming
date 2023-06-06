#include "lists.h"

/**
 * free_listint - frees listint_t
 * @head: points to first node in the list
 */

void free_listint(listint_t *head)
{
	listint_t *new;

	while (head)
	{
		new = head->next;
		free(head);
		head = new;
	}
}
