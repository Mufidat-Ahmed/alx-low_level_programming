#include "hash_tables.h"

/**
 * hash_table_set -  adds an elemtent to the hash table
 * @ht: hash table pointer to be used
 * @key: unempty string to be added
 * @value: value associated with the key
 * Return: 1 on success else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *copy;
	unsigned long int m, count;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);
	copy = strdup(value);
	if (copy == NULL)
		return (0);
	count = key_index((const unsigned char *)key, ht->size);
	for (m = count; ht->array; m++)
	{
		if (strcmp(ht->array[m]->key, key) == 0)
		{
			free(ht->array[m]->value);
			ht->array[m]->value = copy;
			return (1);
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(copy);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = copy;
	new_node->next = ht->array[count];
	ht->array[count] = new_node;
	return (1);
}
