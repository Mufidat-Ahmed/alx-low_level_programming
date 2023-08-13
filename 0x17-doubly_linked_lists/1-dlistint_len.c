#include "lists.h"

/**
 * dlistint_len - returns the number of elements in dlistint_t list
 * @h: points to the doubly linked list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t index = 0;

	while (h != NULL)
	{
		index++;
		h = h->next;
	}
	return (index);
}
