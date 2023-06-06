#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a function at index
 * @head: points to the first node in the list
 * @index: where the node should be deleted
 * Return: 1 or -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new = *head;
	listint_t *node = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(new);
		return (1);
	}

	while (i < index - 1)
	{
		if (!new || !(new->next))
			return (-1);
		new = new->next;
		i++;
	}


	node = new->next;
	new->next = node->next;
	free(node);

	return (1);
}
