#include "lists.h"

/**
 * print_listint - function that prints all elements of a lists
 * @h: pointer to the lists to be printed
 * Return: list
 */

size_t print_listint(const listint_t *h)
{
	size_t list = 0;

	while (h)
	{
		printf("%d\n", h->n);
		list++;
		h = h->next;
	}

	return (list);
}
