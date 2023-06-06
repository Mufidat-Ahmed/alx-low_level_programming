#include "lists.h"

/**
 * reverse_listint - reverses the listint_t list
 * @head: points to the first node i the list
 * Return: head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *new = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = new;
		new = *head;
		*head = next;
	}
	*head = new;

	return (*head);
}
