#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of listint_t
 * @head: points the first node in the list
 * Return: sum of the data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *new = head;

	while (new)
	{
		sum += new->n;
		new = new->next;
	}
	return (sum);
}
