#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer
 * @index: index of the node starting from 0
 * Return: null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *x;

	size = 0;
	if (!head)
	return (NULL);

	x = head;
	while (x)
	{
	if (index == size)
	return (x);
	size++;
	x = x->next;
	}
	return (NULL);
}
