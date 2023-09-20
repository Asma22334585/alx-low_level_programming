#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 * @src: string 1
 * @dest: string 2
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a])
	{
		a++;
	}
	for (b = 0; src[b] ; b++)
	{
		dest[a] = src[b];
		a++;
	}
	return (dest);
}
