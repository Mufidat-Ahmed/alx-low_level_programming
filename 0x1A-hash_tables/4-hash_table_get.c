#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: points to the hash table used
 * @key: key to be found
 * Return: value associated with the element or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *new_node;
	unsigned long int count;

	if (key == NULL || ht == NULL || *key == '\0')
		return (NULL);
	count = key_index((const unsigned char *)key, ht->size);
	if (count >= ht->size)
		return (NULL);
	new_node = ht->array[count];

	while (new_node && strcmp(new_node->key, key) != 0)
	{
			return (new_node->key);
		new_node = new_node->next;
	}
	return ((new_node == NULL) ?  NULL : new_node->value);
}
