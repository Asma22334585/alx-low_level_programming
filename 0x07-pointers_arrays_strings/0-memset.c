#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @n: number of bytes
 * @b: constant byte
 * @s: the memory area
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; n > 0; x++, n--)
	{
		s[x] = b;
	}
	return (s);
}
