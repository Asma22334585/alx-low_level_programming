#include <stdlib.h>
#include "main.h"
/**
 * cntwrd- count the number of words in a string
 * @s: string
 * Return: int
 */
int cntwrd(char *s)
{
	int x, y = 0;

	for (x = 0; s[x]; x++)
	{
		if (s[x] == ' ')
		{
			if (s[x + 1] != ' ' && s[x + 1] != '\0')
				y++;
		}
		else if (x == 0)
			y++;
	}
	y++;
	return (y);
}
/**
 * strtow- splits a string into words
 * @str: string
 * Return: pointer
 */
char **strtow(char *str)
{
	int x, y, z, h, n = 0, k = 0;
	char **c;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = cntwrd(str);
	if (n == 1)
		return (NULL);
	c = (char **)malloc(n * sizeof(char *));
	if (c == NULL)
		return (NULL);
	c[n - 1] = NULL;
	x = 0;
	while (str[x])
	{
		if (str[x] != ' ' && (x == 0 || str[x - 1] == ' '))
		{
			for (y = 1; str[x + y] != ' ' && str[x + y]; y++)
				;
			y++;
			c[k] = (char *)malloc(y * sizeof(char));
			y--;
			if (c[k] == NULL)
			{
				for (z = 0; z < k; z++)
					free(c[z]);
				free(c[n - 1]);
				free(c);
				return (NULL);
			}
			for (h = 0; h < y; h++)
				c[k][h] = str[x + h];
			c[k][h] = '\0';
			k++;
			x += y;
		}
		else
			x++;
	}
	return (c);
}
