#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the begining of a list
 * @head: points to the list list_t
 * @str: string to be duplicated
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int len = 0;

	while (str[len])
		len++;
	node = malloc(sizeof(list_t));
			if (!node)
			{
			return (NULL);

			node->str = strdup(str);
			node->len = len;
			node->next = (*head);
			(*head) = node;
			}
			return (*head);
}
