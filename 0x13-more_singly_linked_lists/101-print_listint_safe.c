#include "lists.h"

/**
 * print_listint_safe - prints the linked list listint_t
 * @head: points to the first node in the list
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
/**
 * listint_len - Counts the number in the list
 * @head: points to the first node in the list
 * Return: 0
 */
size_t listint_len(const listint_t *head)
{
	const listint_t *len, *m;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	len = head->next;
	m = (head->next)->next;

	while (m)
	{
		if (len == m)
		{
			len = head;
			while (len != m)
			{
				node++;
				len = len->next;
				m = m->next;
			}

			len = len->next;
			while (len != m)
			{
				node++;
				len = len->next;
			}
			return (node);
		}
		len = len->next;
		m = (m->next)->next;
	}
	return (0);
}
