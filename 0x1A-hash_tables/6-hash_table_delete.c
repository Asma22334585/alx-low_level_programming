#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: pointer
 *Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *x;

	if (!ht || !ht->array || !ht->size)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			x = ht->array[i]->x;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = x;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
