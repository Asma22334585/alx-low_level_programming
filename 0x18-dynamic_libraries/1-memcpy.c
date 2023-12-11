#include "main.h"
/**
 * _memcpy- copies memory area
 * @n: number of bytes
 * @dest: memory where is stored
 * @src: memory where is copied
 * Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
