#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: pointer
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t  *x;
	char n_f = 0;

	if (!ht || !ht->array)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		x = ht->array[i];
		while (x != NULL)
		{
			if (n_f == 1)
				printf(", ");
			printf("'%s': '%s'", x->key, x->value);
			n_f = 1;
			x = x->next;
		}
	}
	printf("}\n");
}
