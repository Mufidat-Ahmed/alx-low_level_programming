#include "lists.h"

/**
 * add_nodeint_end - function adds node at the end of a list
 * @head: points to the beginning of the node
 * @n: integer type to be used
 * Return: add
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add;
	listint_t *new = *head;

	add = malloc(sizeof(listint_t));
	if (!add)
		return (NULL);

	add->n = n;
	add->next = NULL;

	if (*head == NULL)
	{
		*head = add;
		return (add);
	}

	while (new->next)
		new = new->next;

	new->next = add;

	return (add);
}
