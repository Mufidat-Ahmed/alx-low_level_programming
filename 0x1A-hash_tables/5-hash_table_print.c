#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table how it appear in the hash table
 * @ht: points to the used hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *new_node;
	unsigned long int m;
	unsigned char flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (m = 0; m < ht->size; m++)
	{
		if (ht->array[m] != NULL)
		{
			if (flag == 1)
				printf(", ");
			new_node = ht->array[m];
			while (new_node != NULL)
		{
				printf("'%s': '%s'", new_node->key, new_node->value);
				new_node = new_node->next;
				if (new_node != NULL)
					printf(", ");
		}
			flag = 1;
		}

	}
	printf("}");
}
