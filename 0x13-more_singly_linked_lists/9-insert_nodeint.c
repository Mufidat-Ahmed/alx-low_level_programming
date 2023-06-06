#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @head: points to the first node in the list
 * @idx: where the new node should be added
 * @n: integer to be used
 * Return: address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *node = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; node && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = node->next;
			node->next = new;
			return (new);
		}
		else
			node = node->next;
	}

	return (NULL);
}
