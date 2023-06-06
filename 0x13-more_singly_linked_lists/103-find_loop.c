#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: points to the first node in the list
 * Return: null if there is no list
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *new = head;
	listint_t *node = head;

	if (!head)
		return (NULL);

	while (new && node && node->next)
	{
		node = node->next->next;
		new = new->next;
		if (node == new)
		{
			new = head;
			while (new != node)
			{
				new = new->next;
				node = node->next;
			}
			return (node);
		}
	}
	return (NULL);
}
