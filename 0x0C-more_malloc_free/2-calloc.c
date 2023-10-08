#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: pointer
 * @b: char
 * @n: int
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
/**
 * *_calloc - allocates memory for an array
 * @nmemb: int
 * @size: int
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(size * nmemb);
	if (c == NULL)
		return (NULL);
	_memset(c, 0, nmemb * size);
	return (c);
}
