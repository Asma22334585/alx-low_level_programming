#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer
 * @key: key
 * @value: value
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *n_v, *n_k;
	hash_node_t  *x, *n_node;

	if (!ht || !key || !*key || !value)
		return (0);

	n_v = strdup(value);
	if (!n_v)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	x = ht->array[index];

	while (x)
	{
		if (!strcmp(key, x->key))
		{
			free(x->value);
			x->value = n_v;
			return (1);
		}
		x = x->next;
	}
	n_node = calloc(1, sizeof(hash_node_t));
	if (n_node == NULL)
	{
		free(n_v);
		return (0);
	}
	n_k = strdup(key);
	if (!n_k)
		return (0);
	n_node->key = n_k;
	n_node->value = n_v;
	n_node->next = ht->array[index];
	ht->array[index] = n_node;
	return (1);
}
