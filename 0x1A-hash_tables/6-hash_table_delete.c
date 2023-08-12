#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *new_node, *temp;
	unsigned long int m;

	for (m = 0; m < ht->size; m++)
	{
		if (ht->array[m] != NULL)
		{
			new_node = ht->array[m];
			while (new_node != NULL)
			{
				temp = new_node->next;
				free(new_node->key);
				free(new_node->value);
				free(new_node);
				new_node = temp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
