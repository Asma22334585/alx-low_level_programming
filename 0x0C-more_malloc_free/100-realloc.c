#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: int
 * @new_size: int
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *c;
	char *o;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	c = malloc(new_size);
	if (!c)
		return (NULL);
	o = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			c[i] = o[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			c[i] = o[i];
	}
	free(ptr);
	return (c);
}
