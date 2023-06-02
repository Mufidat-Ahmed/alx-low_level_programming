#include "lists.h"
#include <stdio.h>

/**
 * print_list - A function that prints all elements in a lists
 * @h: pointer to be used
 * Return: m
 */

size_t print_list(const list_t *h)
{
	size_t m = 0;

	while (h)
	{
		if (!h->str)
			printf("[0](nil)\n");
			else
				printf("%s\n", h->str);
			h = h->next;
			m++;
	}
	return (m);
}
