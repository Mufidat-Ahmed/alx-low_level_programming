#include "lists.h"

/**
 * free_listint_safe - free list
 * @h: points to the first node in the list
 * Return: number of elements freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int i;
	listint_t *new;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		i = *h - (*h)->next;
		if (i > 0)
		{
			new = (*h)->next;
			free(*h);
			*h = new;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;

	return (len);
}
