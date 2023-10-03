#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup-returns a pointer to a newly allocated space in memory
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	int x = 0, size = 0;
	char *y;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
		;
		y = malloc(size * sizeof(*str) + 1);
	if (y == NULL)
	{
		return (NULL);
	}
	else
	{
		for (; x < size; x++)
			y[x] = str[x];
	}
	return (y);
}
