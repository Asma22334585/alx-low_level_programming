#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat-  concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: int
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int x, y, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	c = malloc(len1 + n + 1);
	if (c == NULL)
	{
		return (NULL);
	}
	for (x = 0; s1[x] != '\0'; x++)
		c[x] = s1[x];
	for (y = 0; y < n; y++)
	{
		c[x] = s2[y];
		x++;
	}
	c[x] = '\0';
	return (c);
}
