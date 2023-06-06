#include "lists.h"

/**
 * pop_listint - deletes the head node of the list
 * @head: points to the first node in the list
 * Return: 0 if NUll
 */

int pop_listint(listint_t **head)
{
	listint_t *new;
	int pop;

	if (!head || !*head)
		return (0);

	pop = (*head)->n;
	new = (*head)->next;
	free(*head);
	*head = new;

	return (pop);
}
