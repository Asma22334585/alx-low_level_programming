#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < n && src[b] != '\0' ; b++)
	{
	dest[a] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
