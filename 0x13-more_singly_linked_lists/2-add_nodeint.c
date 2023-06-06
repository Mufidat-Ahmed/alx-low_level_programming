#include "lists.h"

/**
 * add_nodeint - function adds a new node at the beginning
 * @head: points to the first node in the list
 * @n: interger data type to be used
 * Return: a pointer of NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));
	if (!add)
		return (NULL);
	add->n = n;
	add->next = *head;
	*head = add;
	return (add);
}
