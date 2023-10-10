#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: first node in the list
 * @index:  index of the node, starting from 0
 * Return: NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int current = 0;

	while (head != NULL)
	{
		if (current == index)
			return (head);

	head = head->next;
	current++;
	}
	return (NULL);
}
