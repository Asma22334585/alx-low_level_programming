#include "lists.h"

/**
* list_len - length of linked list
* @h: pointer
* Return: int
*/

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
