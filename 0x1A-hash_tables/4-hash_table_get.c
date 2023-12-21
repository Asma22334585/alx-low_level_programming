#include "hash_tables.h"
/**
 * hash_table_get - retrieve value associeted with key
 * @ht: pointer
 * @key: key
 * Return: value or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t  *x;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	x = ht->array[index];

	while (x)
	{
		if (!strcmp(key, x->key))
			return (x->value);
		x = x->next;
	}
	return (NULL);
}
