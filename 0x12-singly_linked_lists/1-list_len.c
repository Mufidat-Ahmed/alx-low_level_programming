#include "lists.h"
#include <stdlib.h>

/**
 * list_len - number of elemets in a list
 * @h: pointer to be used
 * Return: m
 */

size_t list_len(const list_t *h)
{
	size_t m = 0;

	while (h)
	{
		m++;
		h = h->next;
	}
	return (m);
}
