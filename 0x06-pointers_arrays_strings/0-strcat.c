#include "main.h"
/**
 * _strcat(char *dest, char *src)-concatenates two strings
 * @src: string 1
 * @dest: string 2
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
