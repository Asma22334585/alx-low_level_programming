#include <stdlib.h>
#include "main.h"
/**
 * *array_range - creates an array of integers
 * @min: int
 * @max: int
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *c;
	int x, l;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	c = malloc(sizeof(int) * l);
	if (c == NULL)
		return (NULL);
	for (x = 0; min <= max; x++)
		c[x] = min++;
	return (c);
}
