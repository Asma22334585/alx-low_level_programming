#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked list.
 * @h: linked
 *
 * Return: int
 */
size_t listint_len(const listint_t *h)
{
	size_t nmbr = 0;

	while (h)
	{
		nmbr++;
		h = h->next;
	}
	return (nmbr);
}
