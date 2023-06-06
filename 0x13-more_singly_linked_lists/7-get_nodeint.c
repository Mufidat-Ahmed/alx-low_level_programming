#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of listint_t
 * @head: points to the first node in the list
 * @index: index of the node starting from 0
 * Return: null if the node doesnt exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m;
	listint_t *new;

	while (new && m < index)
	{
		new = new->next;
		m++;
	}
	return (new ? new : NULL);
}
